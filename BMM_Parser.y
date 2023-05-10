%{
    int yylex(void);
    #include <stdio.h>
    #include <stdlib.h>
    void yyerror(char *);
    extern int yylineno;     
    extern char *yytext;
    extern FILE *yyin;
    int *lineNums; 
    char loop_var[50];
    int* retLineNums, *gosubLineNums;
    int retInd = 0, gosubInd = 0;
    int status=0;
%}

%token REM STRING_LITERAL FLOAT INT SINGLE_UPPER UPPER_DIGIT STOP FOR TO STEP NEXT GOTO            
%token NOT AND OR XOR
%token EQ NE LT GT LE GE
%token DATA LET INPUT END DIM DEF FN IF THEN PRINT GOSUB RETURN
%left OR XOR
%left AND
%left NOT
%left EQ
%left NE
%left LT
%left GT
%left LE
%left GE
%left '*' '/'
%left '+' '-'
%start program
%%
program: 
        stmts LINE_NO END '\n'
        |stmts LINE_NO END
;
stmts:
        |stmts stmt     
;
stmt:
        LINE_NO INST '\n'     {if($2==1){retLineNums[retInd++] =$1;}}  
        |error '\n'             
LINE_NO: INT
;
INST: 
        data_inst       {$$=0;}
        |input_inst     {$$=0;}
        |dim_inst       {$$=0;}
        |REM            {$$=0;}
        |function_def   {$$=0;}
        |if_stmt        {$$=0;}
        |print_stmt     {$$=0;}
        |let_stmt       {$$=0;}
        |for_stmt       {$$=0;}
        |goto_stmt      {$$=0;}
        |gosub_stmt     {$$=0;}
        |STOP           {$$=0;}
        |return_stmt{$$=1;}
;
data_inst: DATA const_list
;
const_list: 
            numeric_constant ',' const_list
            |STRING_LITERAL ',' const_list
            |numeric_constant
            |STRING_LITERAL
;
numeric_constant: FLOAT|INT 
;
input_inst:
        INPUT scalar_var_list
;

if_stmt: 
        IF condition THEN INT   {if(!lineNums[$4]){yyerror("Line no. doesn't exist");}}
;

condition:
        boolean_expr
;        
boolean_expr:
        arithmetic_expr relop arithmetic_expr
        |str_bool_expr
;

str_bool_expr:
        str_bool_expr relop str_bool_expr
        |string_op EQ string_op
        |string_op NE string_op
;
string_op:
        string_var
        |STRING_LITERAL
;
relop:
        EQ
        |NE
        |GT
        |GE
        |LT
        |LE
;

goto_stmt:
        GOTO LINE_NO   {if(!lineNums[$2]){yyerror("Line no. doesn't exist");}}
;  
gosub_stmt:
        GOSUB LINE_NO   {if(!lineNums[$2]){yyerror("Line no. doesn't exist");}else{{gosubLineNums[gosubInd++] = $2;}}}
;
return_stmt:
        RETURN         
;
for_stmt:
        header body {
                        if($1!=$2){
                                yyerror("loop variable must be same at the beginning of for statement and at NEXT statement");
                        }
                        }
;
header:
        FOR for_var EQ arithmetic_expr TO arithmetic_expr STEP arithmetic_expr '\n'         {$$ = $2;}
        |FOR for_var EQ arithmetic_expr TO arithmetic_expr '\n'                              {$$ = $2;}
        |FOR error '\n' {yyerror("error in FOR statement");}
;
body:
        stmts LINE_NO NEXT for_var                  {$$=$4;}                                                   
;
for_var:
        SINGLE_UPPER possible_datatype  {$$=$1;}
        |UPPER_DIGIT possible_datatype  {$$=$1;}
;

possible_datatype:
        |'%'
        |'!'
        |'#'
;

let_stmt:    
        LET assignment
;
assignment:
        string_var EQ STRING_LITERAL
        |numeric_var EQ logic_expr
;

print_stmt: 
                PRINT print_args
;
print_args:
                |print_expresion_list print_if_end_delimiter
;
print_expresion_list:
                print_expresion_list delimiter print_expression 
                |print_expression
;
delimiter:
                ';'
                |','
;
print_expression:
                STRING_LITERAL
                |string_var
                |logic_expr
;
print_if_end_delimiter:
                |delimiter
;            

function_def:
        DEF function_name EQ logic_expr
        |DEF function_name '('param ')' EQ logic_expr
;

function_name: FN SINGLE_UPPER
;

param: scalar_variable
;

dim_inst:
    DIM dim_list
;
dim_list:
        dim_list ',' array_decl
        |array_decl
;
array_decl:
        SINGLE_UPPER '(' INT ')'
        |SINGLE_UPPER '(' INT ',' INT ')'
;

scalar_var_list: scalar_var_list ',' scalar_variable
                |scalar_variable
;
scalar_variable:
                int_var
                |single_pre_var
                |double_pre_var
                |string_var
;
numeric_var:    
        int_var
        |single_pre_var
        |double_pre_var
;
int_var:
        SINGLE_UPPER 
        |UPPER_DIGIT
        |SINGLE_UPPER '%'
        |UPPER_DIGIT '%'
        |SINGLE_UPPER access_list
        |SINGLE_UPPER access_list '%'
;

single_pre_var:
        SINGLE_UPPER '!'
        |UPPER_DIGIT '!'
        |SINGLE_UPPER access_list '!'
;

double_pre_var:
        SINGLE_UPPER '#'
        |UPPER_DIGIT '#'
        |SINGLE_UPPER access_list '#'
;
string_var:
        SINGLE_UPPER '$'
        |UPPER_DIGIT  '$'
;
access_list:
        '(' arithmetic_expr ')'
        | '(' arithmetic_expr ',' arithmetic_expr ')'
;
int_var_const:
        INT
        |int_var
;
relational_expr:
                arithmetic_expr                
                |relational_expr GE relational_expr
                |relational_expr GT relational_expr
                |relational_expr LE relational_expr
                |relational_expr LT relational_expr
                |relational_expr EQ relational_expr
                |relational_expr NE relational_expr
;               
                
arithmetic_expr:
                term1
                |arithmetic_expr '*' arithmetic_expr
                |arithmetic_expr '/' arithmetic_expr
                |arithmetic_expr '+' arithmetic_expr
                |arithmetic_expr '-' arithmetic_expr
;
term1:
        '-' term1
        |term2
;
term2:
        term2 '^' term2
        |'(' logic_expr ')'
        |int_var
        |single_pre_var
        |double_pre_var
        |FLOAT
        |INT
;
%%

void yyerror(char *s) {
        status = 1;
    fprintf(stderr, "line %d: %s\n",yylineno,s);
}

int main(int argc, char *argv[]) {
        lineNums = (int*) calloc(10000, sizeof(int));
        gosubLineNums = (int*) calloc(10000, sizeof(int));
        retLineNums = (int*) calloc(10000, sizeof(int));
        yyin=fopen(argv[1],"r");
        if (!checkLinesOrder(yyin))
                return 0;
        fclose(yyin);
        yyin=fopen(argv[1],"r");
        yylineno=1;
        yyparse();
        int found = 0;
        if(retInd==0){
                found=1;
        }
        for(int j=0; j<gosubInd; j++)
        {
                if(retLineNums[0]>=gosubLineNums[j] && gosubLineNums[j]>0) found = 1;
        }
        if(!found) yyerror("FATAL ERROR: There is no corrrespoding GOSUB statement for the RETURN statemnt.");
        for(int i=0;i<retInd-1;i++)
        {
                found = 0;
                for(int j=0; j<gosubInd; j++)
                {
                        if(retLineNums[i]<gosubLineNums[j] && retLineNums[i+1]>=gosubLineNums[j] && gosubLineNums[j]>0) found = 1;
                }
                if(!found) yyerror("FATAL ERROR: There is no corrrespoding GOSUB statement for the RETURN statemnt.");
        }
        if(!status) printf("\n=================================PROGRAM PARSED SUCCESSFULLY.===================================\n");
    return 0;
}


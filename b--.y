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
        '(' int_var_const ')'
        | '(' int_var_const ',' int_var_const ')'
;
int_var_const:
        INT
        |int_var
;

logic_expr:
        relational_expr
        |NOT logic_expr
        |logic_expr AND logic_expr
        |logic_expr XOR logic_expr
        |logic_expr OR logic_expr
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

//checkLinesOrder() checks if the program lines no. are in the ascending order.
int checkLinesOrder(FILE *fptr)
{
    if (fptr == NULL)
    {
        printf("Error reading file.\n");
        return 0;
    }
    int prevlineNo = 0, curLineNo = 0, totalLines = 0, maxLineNo = 1;

    while (!feof(fptr))
    {
        int scanned = fscanf(fptr, " %d", &curLineNo);
        if(!scanned)
        {
            printf("Error: Line should start with a no.!!\n");
            return 0;   
        }
        if (curLineNo >= 10000)
        {
            printf("Error: File too long!!\n");
            return 0;
        }
        // printf("%d\n", curLineNo);
        if (curLineNo <= prevlineNo)
        {
            printf("Error: Invalid Line no. at line %d!!\n", curLineNo);
            return 0;
        }
        prevlineNo = curLineNo;
        maxLineNo = curLineNo;
        lineNums[curLineNo] = 1;        //increasing the lineNo frequency to 1
        
        char ch;
        fscanf(fptr, "%c", &ch);
        while(!feof(fptr) && ch != '\n')
        {
            // printf("%c", ch);           
            fscanf(fptr, "%c", &ch);
        }
        totalLines++;
        ch=fgetc(fptr);
        if(ch == EOF) break;
        ungetc(ch,fptr);
    }
    printf("Total no. of lines in the program: %d\n", totalLines);
        return 1;
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

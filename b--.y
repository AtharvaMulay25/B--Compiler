%{
    int yylex(void);
    #include <stdio.h>
    void yyerror(char *);
%}

%token REM 
%%
program: LINE_NO INST \n
;
INST: data_inst
;
data_inst: DATA const_list
;
const_list: (numeric_constant|string_code) ',' const_list
;

%%

void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}
int main(void) {
    yyparse();
    return 0;
}

%{
    #include <stdlib.h>
    void yyerror(char *);
    #include "y.tab.h"
%}

%% 

[0-9]+\.[0-9]+ {return FLOAT;}
[0-9]+  {
    yylval=atoi(yytext);
    return INT;}
[A-Z]  {
    yylval= (yytext[0]);
    return SINGLE_UPPER;}
[A-Z][0-9]  {
    yylval= (yytext[0]+((yytext[0]-'A')*10)+yytext[1]+26-'0');
    return UPPER_DIGIT;}
[%!#$();]     {return *yytext;}
DATA    {return DATA;}
INPUT   {return INPUT;}
DIM     {return DIM;}
DEF     {return DEF;}
FN      {return FN;}    
PRINT   {return PRINT;}
LET     {return LET;}
STOP   {return STOP;}
FOR    {return FOR;}
TO     {return TO;}
STEP   {return STEP;}
NEXT   {return NEXT;}
GOTO   {return GOTO;}
IF     {return IF;}
THEN     {return THEN;}
END     {return END;}
GOSUB   {return GOSUB;}
RETURN   {return RETURN;}
REM[^a-z\n]*\n     {
                    unput(yytext[yyleng-1]);
                    return REM;
                    }
REM[^\n]*\n         {
                        unput(yytext[yyleng-1]);
                        yyerror("REM must have UPPER CASE LETTERS but lower case found");
                        return REM;
                    }
\"([^"\n]*)["\n]    {   if(yytext[yyleng-1]!='"'){
                            unput(yytext[yyleng-1]);
                            yyerror("String must end with double qoutes");
                        }
                        else return STRING_LITERAL;
                    }
,   {return ',';}
\t      {yyerror("Tabs not allowed in the language");}
[ ]     {;}
[\n]    {
    yylineno++;
    return '\n';}
[=]       {return EQ;}
[<][>]      {return NE;}
[<]       {return LT;}
[<][=]      {return LE;}
[>]       {return GT;}
[>][=]      {return GE;}
[-+*/]      {return *yytext;}
"^"         {return '^';}
NOT     {return NOT;}
AND     {return AND;}
XOR     {return XOR;}
OR      {return OR;}
[.]     {yyerror("undefined character");}

%%

int yywrap(void)
{
    return 1;
}
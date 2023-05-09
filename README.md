# B-- Compiler





## Assumptions


## How to run

> 
    lex BMM_Scanner.l
>
    yacc -d BMM_Parser.y

>
    cc lex.yy.c y.tab.c -o run
>
    ./run input.txt

### Combined statements to run the code:
>
    lex b--.l;yacc -d b--.y;cc lex.yy.c y.tab.c -o run;./run input.txt

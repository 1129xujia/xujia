%option yylineno
%{
    #include"tree.h"
    #include "syntax.tab.h"
    #include<stdlib.h>
    int yycolumn = 1;
    int syn_error = 0;
    #define YY_USER_ACTION \
       yylloc.first_line = yylloc.last_line = yylineno; \
       yylloc.first_column = yycolumn; \
       yylloc.last_column = yycolumn + yyleng - 1; \
       yycolumn += yyleng;
%}

digit [0-9]
integer [1-9][0-9]*|0
letter [_a-zA-Z]
id {letter}[_a-zA-Z0-9]*
nor_float [0-9]+\.[0-9]+
exp_float (([0-9]*\.[0-9]+)|([0-9]+\.[0-9]*))[eE][+-]?[0-9]+

%%

{integer} { 
            struct Node*node = init("INT",yylineno,1); 
            int val = atoi(yytext);
            node->unit.val_int = val;
            yylval.node = node;
            return INT;
}
{nor_float}|{exp_float} {
    struct Node*node = init("FLOAT",yylineno,1);
    float val = atof(yytext);
    node->unit.val_float = val;
    yylval.node = node;
    return FLOAT; 
}

"int" {   
    struct Node*node = init("TYPE",yylineno,1);
    strcpy(node->unit.val_char,yytext);
    yylval.node = node;
    return TYPE;
}
"float" {
    struct Node*node = init("TYPE",yylineno,1);
    strcpy(node->unit.val_char,yytext);
    yylval.node = node;
    return TYPE;
}
";" {
    struct Node*node = init("SEMI",yylineno,1);
    yylval.node = node;
    return SEMI;
}
"," {
    struct Node*node = init("COMMA",yylineno,1);
    yylval.node = node;
    return COMMA;
}
"=" {
    struct Node*node = init("ASSIGNOP",yylineno,1);
    yylval.node = node;
    return ASSIGNOP;
}
>|<|>=|<=|==|!= {
    struct Node*node = init("RELOP",yylineno,1);
    yylval.node = node;
    return RELOP;
}
"+" {
    struct Node*node = init("PLUS",yylineno,1);
    yylval.node = node;
    return PLUS;
}
"-" {
    struct Node*node = init("MINUS",yylineno,1);
    yylval.node = node;
    return MINUS;
}
"*" {
    struct Node*node = init("STAR",yylineno,1);
    yylval.node = node;
    return STAR;
}
"/" {
    struct Node*node = init("DIV",yylineno,1);
    yylval.node = node;
    return DIV;
}
"&&" {
    struct Node*node = init("AND",yylineno,1);
    yylval.node = node;
    return AND;
}
"||" {
    struct Node*node = init("OR",yylineno,1);
    yylval.node = node;
    return OR;
}
"." {
    struct Node*node = init("DOT",yylineno,1);
    yylval.node = node;
    return DOT;
}
"!" {
    struct Node*node = init("NOT",yylineno,1);
    yylval.node = node;
    return NOT;
}
"(" {
    struct Node*node = init("LP",yylineno,1);
    yylval.node = node;
    return LP;
}
")" {
    struct Node*node = init("RP",yylineno,1);
    yylval.node = node;
    return RP;
}
"[" {
    struct Node*node = init("LB",yylineno,1);
    yylval.node = node;
    return LB;
}
"]" {
    struct Node*node = init("RB",yylineno,1);
    yylval.node = node;
    return RB;
}
"{" {
    struct Node*node = init("LC",yylineno,1);
    yylval.node = node;
    return LC;
}
"}" {
    struct Node*node = init("RC",yylineno,1);
    yylval.node = node;
    return RC;
}
"struct" {
    struct Node*node = init("STRUCT",yylineno,1);
    yylval.node = node;
    return STRUCT;
}
"return" {
    struct Node*node = init("RETURN",yylineno,1);
    yylval.node = node;
    return RETURN;
}
"if" {
    struct Node*node = init("IF",yylineno,1);
    yylval.node = node;
    return IF;
}
"else" {
    struct Node*node = init("ELSE",yylineno,1);
    yylval.node = node;
    return ELSE;
}
"while" {
    struct Node*node = init("WHILE",yylineno,1);
    yylval.node = node;
    return WHILE;
}
{id} {
    struct Node*node = init("ID",yylineno,1);
    strcpy(node->unit.val_char,yytext);
    yylval.node = node;
    return ID;
}
" " {;}
\r {;}
\t {;}
\n {yycolumn = 1;}
. {syn_error++;printf("Error type A at Line %d: Mysterious characters \'%s\'\n",yylineno, yytext);}
%%
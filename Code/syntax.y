%{
   #include <stdio.h>
   #include"tree.h"
   #include"lex.yy.c"
   int yyerror(char*msg);
   extern int syn_error;
   extern struct Node*root;
   extern int yylineno;
%}
%union {
  int type_int;
  float type_float;
  double type_double;
  struct Node* node ;
}

%locations
%token <node> INT
%token <node> FLOAT
%token <node> ID
%token <node> SEMI
%token <node> COMMA
%token <node> RELOP
%token <node> ASSIGNOP
%token <node> PLUS MINUS STAR DIV
%token <node> AND
%token <node> OR
%token <node> DOT
%token <node> NOT
%token <node> LP RP LB RB LC RC
%token <node> STRUCT
%token <node> RETURN
%token <node> IF ELSE
%token <node> WHILE
%token <node> TYPE

%type <node> Program ExtDefList ExtDef ExtDecList 
%type <node> Specifier StructSpecifier OptTag Tag
%type <node> VarDec FunDec VarList ParamDec
%type <node> CompSt StmtList Stmt
%type <node> DefList Def DecList Dec
%type <node> Exp Args

%start Program
%right ASSIGNOP
%left OR
%left AND
%left RELOP
%left PLUS MINUS
%left STAR DIV
%right NOT UMINUS
%left DOT LB RB LP RP

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%%
Program : ExtDefList{
  root = init("Program",@$.first_line,0);
  $$ = root;
  insert($$,$1);
};

ExtDefList : ExtDef ExtDefList
{
  $$ = init("ExtDefList",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| {$$ = NULL;};

ExtDef : Specifier ExtDecList SEMI
{
  $$ = init("ExtDef",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Specifier SEMI
{
  $$ = init("ExtDef",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| Specifier FunDec CompSt
{
  $$ = init("ExtDef",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Specifier ExtDecList error {syn_error++;}
| Specifier error{syn_error++;}
| error FunDec CompSt{syn_error++;}
| Specifier error CompSt{syn_error++;}
| Specifier FunDec error{syn_error++;}

ExtDecList : VarDec
{
  $$ = init("ExtDecList",@$.first_line,0);
  insert($$,$1);
}
| VarDec COMMA ExtDecList
{
  $$ = init("ExtDecList",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| error COMMA ExtDecList {syn_error++;}
| VarDec COMMA error {syn_error++;};

Specifier : TYPE
{
  $$ = init("Specifier",@$.first_line,0);
  insert($$,$1);
}
| StructSpecifier
{
  $$ = init("Specifier",@$.first_line,0);
  insert($$,$1);
};

StructSpecifier : STRUCT OptTag LC DefList RC
{
  $$ = init("StructSpecifier",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
  insert($$,$5);
}
| STRUCT Tag
{
  $$ = init("StructSpecifier",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| STRUCT OptTag LC error RC {syn_error++;}
| STRUCT error RC {syn_error++;};

OptTag : ID
{
  $$ = init("OptTag",@$.first_line,0);
  insert($$,$1);
}
|{$$= NULL;}

Tag : ID
{
  $$ = init("Tag",@$.first_line,0);
  insert($$,$1);
};

VarDec : ID
{
  $$ = init("VarDec",@$.first_line,0);
  insert($$,$1);
}
|  VarDec LB INT RB
{
  $$ = init("VarDec",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
}
| VarDec LB error RB{syn_error++;}
| VarDec LB INT error {syn_error++;};

FunDec : ID LP VarList RP
{
  $$ = init("FunDec",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
}
| ID LP RP
{
  $$ = init("FunDec",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| ID LP error RP{syn_error++;}
| ID LP VarList error {syn_error++;}
| error RP {syn_error;};


VarList : ParamDec COMMA VarList
{
  $$ = init("VarList",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| ParamDec
{
  $$ = init("VarList",@$.first_line,0);
  insert($$,$1);
}
|error COMMA VarList {syn_error++;};

ParamDec : Specifier VarDec
{
  $$ = init("ParamDec",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
};

CompSt : LC DefList StmtList RC
{
  $$ = init("CompSt",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
}
| error RC{syn_error++;};

StmtList : Stmt StmtList
{
  $$ = init("StmtList",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| {$$ = NULL;} ;

Stmt : Exp SEMI
{
  $$ = init("Stmt",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| CompSt
{
  $$ = init("Stmt",@$.first_line,0);
  insert($$,$1);
}
| RETURN Exp SEMI
{
  $$ = init("Stmt",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| IF LP Exp RP Stmt %prec LOWER_THAN_ELSE
{
  $$ = init("Stmt",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
  insert($$,$5);
}
| IF LP Exp RP Stmt ELSE Stmt
{
  $$ = init("Stmt",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
  insert($$,$5);
  insert($$,$6);
  insert($$,$7);
}
| WHILE LP Exp RP Stmt
{
  $$ = init("Stmt",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
  insert($$,$5);
}
| error SEMI {syn_error++;}
| Exp error SEMI {syn_error++;}
| RETURN Exp error {syn_error++;}
| RETURN error SEMI {syn_error++;}
| IF error ELSE Stmt {syn_error++;}
| WHILE error {syn_error++;};

DefList : Def DefList
{
  $$ = init("DefList",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| {$$ = NULL;};

Def : Specifier DecList SEMI
{
  $$ = init("Def",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Specifier error SEMI {syn_error++;}
| error DecList SEMI {syn_error++;};

DecList : Dec
{
  $$ = init("DecList",@$.first_line,0);
  insert($$,$1);
}
| Dec COMMA DecList
{
  $$ = init("DecList",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
};

Dec : VarDec
{
  $$ = init("Dec",@$.first_line,0);
  insert($$,$1); 
}
| VarDec ASSIGNOP Exp
{
  $$ = init("Dec",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
};

Exp : Exp ASSIGNOP Exp 
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp AND Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp OR Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp RELOP Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp PLUS Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp MINUS Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp STAR Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp DIV Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| LP Exp RP
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| MINUS Exp %prec UMINUS
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| NOT Exp
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
}
| ID LP Args RP
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
}
| ID LP RP
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp LB Exp RB
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
  insert($$,$4);
}
| Exp DOT ID
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| ID
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
}
| INT
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
}
| FLOAT
{
  $$ = init("Exp",@$.first_line,0);
  insert($$,$1);
}
| Exp ASSIGNOP error{syn_error++;}
| Exp AND error {syn_error++;}
| Exp OR error {syn_error++;}
| Exp RELOP error  {syn_error++;}
| Exp PLUS error {syn_error++;}
| Exp MINUS error {syn_error++;}
| Exp STAR error {syn_error++;}
| Exp DIV error {syn_error++;}
| LP error RP {syn_error++;}
| MINUS error %prec UMINUS {syn_error++;}
| NOT error {syn_error++;}
| ID LP error RP {syn_error++;}
| Exp LB error RB {syn_error++;}
| Exp DOT error {syn_error++;};


Args : Exp COMMA Args
{
  $$ = init("Args",@$.first_line,0);
  insert($$,$1);
  insert($$,$2);
  insert($$,$3);
}
| Exp
{
  $$ = init("Args",@$.first_line,0);
  insert($$,$1);
}
| error COMMA Args {syn_error++;};

%%
int yyerror(char*msg)
{
  syn_error++;
  printf("Error type B at Line %d: %s near %s.\n", yylineno,msg,yytext);
}

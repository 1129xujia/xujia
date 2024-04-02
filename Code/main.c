#include<stdio.h>
#include"tree.h"
extern int yylineno;
extern struct Node*root;
extern void yyrestart(FILE*input_file);
extern int yyparse(void);
extern int syn_error;
extern FILE* yyin;
int main(int argc, char** argv)
{
  if (argc <= 1) return 1;
  FILE* f = fopen(argv[1], "r");
  if (!f)
  {
    perror(argv[1]);
    return 1;
  }
  yylineno = 1;
  yyrestart(f);
  yyparse();
  if(syn_error == 0)
  {
    Print(root,0);
  }
  fclose(f);
  return 0;
}
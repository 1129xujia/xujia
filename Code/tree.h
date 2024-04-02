#ifndef TREE_H
#define TREE_H
union Unit
{
        int val_int;
        float val_float;
        char val_char[100];
};
struct Node
{
    union Unit unit;
    int is_unit;
    int line;
    char name[100];
    struct Node*first_child;
    struct Node*sibling;
    struct Node*last_child;
};
#endif
struct Node*root;
struct Node*init(const char*name,int line,int unit);
void insert(struct Node*parent,struct Node*child);
void Print(struct Node*start,int depth);
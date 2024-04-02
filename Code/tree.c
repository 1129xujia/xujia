#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"tree.h"
struct Node*init(const char*name,int line, int unit)
{
    struct Node*node = (struct Node*)malloc(sizeof(struct Node));
    node->line = line;
    strcpy(node->name,name);
    node->is_unit = unit;
    node->first_child = node->last_child = node->sibling = NULL;
    return node;
}
void insert(struct Node*parent,struct Node*child)
{
    if(child != NULL)
    {
        if(parent->first_child == NULL)
        {
           parent->first_child = child;
           parent->last_child = child;
        }
        else
        {
           parent->last_child->sibling = child;
           parent->last_child = child;
        }
    }
}
void Print(struct Node*start,int depth)
{
    if(start != NULL)
    {
        for(int i = 0;i<depth;i++)
        {
           printf("  ");
        }
        printf("%s",start->name);
        if(start->is_unit == 0)
        {
            printf(" (%d)\n",start->line);
        }
        else
        {
            if(strcmp(start->name,"TYPE") ==0 )
            {
                printf(": %s\n",start->unit.val_char);
            }
            else if(strcmp(start->name,"INT")== 0)
            {
                printf(": %d\n",start->unit.val_int);
            }
            else if(strcmp(start->name,"FLOAT") == 0)
            {
                printf(": %f\n",start->unit.val_float);
            }
            else if(strcmp(start->name,"ID") == 0)
            {
                printf(": %s\n",start->unit.val_char);
            }
            else
            {
                printf("\n");
            }
        }
        Print(start->first_child,depth+1);
        Print(start->sibling,depth);
    }
}
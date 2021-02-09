#ifndef DULLIST_H
#define DULLIST_H
#include "../common.h"

typedef int ElemType;
typedef struct
{
    ElemType data;
    DulNode *prior;
    DulNode *next;

} DulNode;

typedef struct
{
    DulNode *head;
    DulNode *tail;
    int length;
} Dullist;

#endif
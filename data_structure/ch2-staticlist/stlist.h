#ifndef STLIST_H
#define STLIST_H
#include "../common.h"

#define MAXSIZE 10
typedef int ElemType;
typedef struct
{
    ElemType data;
    int cur;
} Component;
typedef struct
{
    Component *dnode;
    Component *nnode;
    int length;
    int size;
} Stl;

Status InitStlist(Stl *l);
Status PrintStlist(Stl l);

#endif
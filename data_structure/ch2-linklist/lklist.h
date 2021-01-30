#ifndef LKLIST_H
#define LKLIST_H
#include "../common.h"

typedef int ElemType;

typedef struct node
{
    ElemType data;
    struct node *next;

} Node;

typedef struct lklist
{
    Node *head;
    int length;
} Lklist;

Status InitList(Lklist *l, ElemType e);
Status InsertList(Lklist *l, int index, ElemType e);
Status TraverseList(Lklist l);
Status GetElem(const Lklist l, int index, ElemType *e);
#endif
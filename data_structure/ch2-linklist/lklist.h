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

Status InitList(Lklist *l);
Status InsertList(Lklist *l, int index, ElemType e);
Status TraverseList(Lklist l);
Status GetElem(const Lklist l, int index, ElemType *e);
Status ListDelete(Lklist *l, int index, ElemType *e);
Status SortList(Lklist *l);
Status MergeList(Lklist *la, Lklist *lb, Lklist *lc);
Status CheckCircle(Lklist l);
#endif
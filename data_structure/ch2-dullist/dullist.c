#include "dullist.h"
#include <stdlib.h>

Status InitList(Dullist *l)
{
    l->head = NULL;
    l->tail = NULL;
    l->length = 0;
    return SUCCESS;
}

Status InsertList(Dullist *l, int index, ElemType e)
{
    if (index < 0 || index > l->length)
    {
        return ERROR;
    }
    DulNode *n = (DulNode *)malloc(sizeof(DulNode));
    n->data=e;
    n->next=NULL;
    n->prior=NULL;

    l->head = n;
    l->tail=n;
    l->length++;
}
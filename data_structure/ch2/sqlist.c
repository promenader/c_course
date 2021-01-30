#include "sqlist.h"
#include <stdlib.h>
#include <stdio.h>

Status InitSqlist(Sqlist *l)
{
    l->e = (ElemType *)malloc(sizeof(ElemType) * SQ_LIST_SIZE);
    if (!l->e)
    {
        return ERROR;
    }
    l->length = 0;
    l->listsize = SQ_LIST_SIZE;
    return SUCCESS;
}
Status RandomInitSqlist(Sqlist *l)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        l->e[i] = rand() % 100;
    }
    l->length = 10;
    return SUCCESS;
}

Status PrintSqlist(const Sqlist l)
{
    printf("\n****start print sqlist******\n");
    int i;
    for (i = 0; i < l.length; i++)
    {
        printf("%d\t", l.e[i]);
    }
    printf("\n****end print sqlist******\n");
    return SUCCESS;
}

Status DestroySqlist(Sqlist *l)
{
    if (l->e)
    {
        free(l->e);
        l->length = 0;
        l->listsize = 0;
        return SUCCESS;
    }
    return ERROR;
}
Status ClearSqlist(Sqlist *l)
{
    if (!l->e)
    {
        return ERROR;
    }
    int i;
    for (i = 0; i < l->length; i++)
    {
        l->e[i] = 0;
    }
    l->length = 0;
    return SUCCESS;
}

int ListEmpty(const Sqlist l)
{
    if (l.length == 0)
    {
        return TRUE;
    }
    return FALSE;
}

Status GetElem(const Sqlist l, int index, ElemType *e)
{
    if (index < 0 || index >= l.length)
    {
        return ERROR;
    }
    *e = l.e[index];
    return SUCCESS;
}

int Locate(const Sqlist l, ElemType e, int (*cp)(ElemType a, ElemType b))
{
    int i;
    for (i = 0; i < l.length; i++)
    {
        if (cp(l.e[i], e) == TRUE)
        {
            return i;
        }
    }
    return ERROR;
}

int compare(ElemType a, ElemType b)
{
    if (a == b)
    {
        return TRUE;
    }
    return FALSE;
}

Status PreElem(const Sqlist l, ElemType cur_e, ElemType *pre_e)
{
    int i = 0;
    for (i = 0; i < l.length; i++)
    {
        if (l.e[i] == cur_e && i > 0)
        {
            *pre_e = l.e[i - 1];
            return SUCCESS;
        }
    }
    return ERROR;
}

Status NextElem(const Sqlist l, ElemType cur_e, ElemType *next_e)
{
    int i = 0;
    for (i = 0; i < l.length; i++)
    {
        if (l.e[i] == cur_e && i != l.length - 1)
        {
            *next_e = l.e[i + 1];
            return SUCCESS;
        }
    }
    return ERROR;
}
Status ListInsert(Sqlist *l, int index, ElemType e)
{
    if (l->length == l->listsize)
    {
        l->e = (ElemType *)realloc(l->e, (SQ_LIST_INCREMENT + l->listsize) * sizeof(ElemType));
        l->listsize += SQ_LIST_INCREMENT;
    }
    if (index < 0 || index > l->length)
    {
        return ERROR;
    }
    int i;
    for (i = l->length; i > index; i--)
    {
        l->e[i] = l->e[i - 1];
    }
    l->e[index] = e;
    l->length++;
    return SUCCESS;
}

Status ListDelete(Sqlist *l, int index, ElemType *e)
{
    if (l->listsize > 2 * l->length)
    {
        l->e = (ElemType *)realloc(l->e, (l->listsize / 2) * sizeof(ElemType));
        l->listsize /= 2;
    }
    if (index < 0 || index > l->length - 1)
    {
        return ERROR;
    }
    int i;
    *e = l->e[index];
    for (i = index; i < l->length - 1; i++)
    {
        l->e[i] = l->e[i + 1];
    }
    l->length--;
    return SUCCESS;
}

Status ListTraverse(const Sqlist l, void (*pvisit)(ElemType a))
{
    int i;
    for (i = 0; i < l.length; i++)
    {
        pvisit(l.e[i]);
    }
    return SUCCESS;
}

void visit(ElemType a)
{
    printf("%d\t", a);
}
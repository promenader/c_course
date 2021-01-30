/**************************************************
 *Filename         :lklist.c
 *Description      :
 *Time             :2021/01/30 16:59:43
 *Author           :promenader
***************************************************/
#include "lklist.h"
#include <stdio.h>
#include <stdlib.h>

Status InitList(Lklist *l, ElemType e)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = e;
    n->next = NULL;
    l->head = n;
    l->length = 1;
    return SUCCESS;
}

Status InsertList(Lklist *l, int index, ElemType e)
{
    if (index < 0 || index >= l->length)
    {
        return ERROR;
    }
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = e;
    n->next = NULL;
    int i;
    Node *p = l->head;
    for (i = 0; i < index; i++)
    {
        p = p->next;
    }
    n->next = p->next;
    p->next = n;
    l->length++;

    return SUCCESS;
}

Status TraverseList(Lklist l)
{
    Node *n = l.head;
    int len = l.length;
    while (len > 0 && n != NULL)
    {
        printf("%d\t", n->data);
        n = n->next;
        len--;
    }

    printf("\n");
}

Status GetElem(const Lklist l, int index, ElemType *e)
{
    if (index < 0 || index >= l.length)
    {
        return ERROR;
    }
    int i;
    Node *n = l.head;
    for (i = 0; i < index; i++)
    {
        n = n->next;
    }
    *e = n->data;
    return SUCCESS;
}
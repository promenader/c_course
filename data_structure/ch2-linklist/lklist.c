/**************************************************
 *Filename         :lklist.c
 *Description      :
 *Time             :2021/01/30 16:59:43
 *Author           :promenader
***************************************************/
#include "lklist.h"
#include <stdio.h>
#include <stdlib.h>

Status InitList(Lklist *l)
{
    l->head = NULL;
    l->length = 0;
    return SUCCESS;
}

Status InsertList(Lklist *l, int index, ElemType e)
{
    if (index < 0 || index > l->length)
    {
        return ERROR;
    }
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = e;
    n->next = NULL;
    if (index == 0)
    {
        n->next = l->head;
        l->head = n;
        l->length++;
        return SUCCESS;
    }
    int i;
    Node *p = l->head;
    for (i = 1; i < index; i++)
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

Status ListDelete(Lklist *l, int index, ElemType *e)
{
    if (index < 0 || index >= l->length)
    {
        return ERROR;
    }
    int i;
    Node *n = l->head;
    if (index == 0)
    {
        l->head = l->head->next;
        *e = n->data;
        free(n);
        l->length--;
        return SUCCESS;
    }
    for (i = 1; i < index; i++)
    {
        n = n->next;
    }
    Node *next = n->next;
    *e = next->data;
    n->next = next->next;
    l->length--;
    free(next);
    return SUCCESS;
}

Status SortList(Lklist *l)
{
    int i, j;
    ElemType tmp;
    Node *n;
    Node *p = l->head;
    while (p)
    {
        n = p->next;
        while (n)
        {
            if (p->data > n->data)
            {
                tmp = n->data;
                n->data = p->data;
                p->data = tmp;
            }
            n = n->next;
        }
        p = p->next;
    }
    return SUCCESS;
}

Status MergeList(Lklist *la, Lklist *lb, Lklist *lc)
{
    Node *na = la->head;
    Node *nb = lb->head;
    while (na != NULL && nb != NULL)
    {
        if (na->data < nb->data)
        {
            InsertList(lc, lc->length, na->data);
            na = na->next;
        }
        else
        {
            InsertList(lc, lc->length, nb->data);
            nb = nb->next;
        }
    }
    while (na)
    {
        InsertList(lc, lc->length, na->data);
        na = na->next;
    }
    while (nb)
    {
        InsertList(lc, lc->length, nb->data);
        nb = nb->next;
    }
}

/*************************************************
 *Description 判断单链表中是否存在环
 *Arguments Lklist
 *Returns bool
*************************************************/
Status CheckCircle(Lklist l)
{
    Node *n1 = l.head;
    Node *n2 = l.head;
    while (n1 && n2)
    {
        n1 = n1->next;
        n2 = n2->next->next;
        if (n1 == n2)
        {
            return TRUE;
        }
    }
    return FALSE;
}
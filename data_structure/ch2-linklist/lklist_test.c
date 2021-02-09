#include "lklist.h"
#include <stdio.h>
#include <stdlib.h>
#define CIRCLE_LIST_TEST

int main(int argc, char const *argv[])
{
#ifdef INSERT_LIST_TEST
    Lklist l;
    InitList(&l);
    TraverseList(l);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length, rand() % 100);
    }
    TraverseList(l);
#endif
#ifdef GET_LIST_TEST
    Lklist l;
    InitList(&l);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length, rand() % 100);
    }
    TraverseList(l);
    ElemType e;
    int index = 3;
    GetElem(l, index, &e);
    printf("index %d value %d\n", index, e);
#endif
#ifdef DELETE_LIST_TEST
    Lklist l;
    InitList(&l);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length, rand() % 100);
    }
    TraverseList(l);
    ElemType e;
    int index = 3;
    ListDelete(&l, index, &e);
    printf("index %d value %d\n", index, e);
    TraverseList(l);

#endif
#ifdef SORT_LIST_TEST
    Lklist l;
    InitList(&l);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length, rand() % 100);
    }
    TraverseList(l);
    SortList(&l);
    TraverseList(l);
#endif
#ifdef MERGE_LIST_TEST
    Lklist la;
    InitList(&la);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&la, la.length, rand() % 100);
    }
    SortList(&la);
    printf("*****start traverse la**********\n");
    TraverseList(la);
    printf("*****end traverse la**********\n");
    Lklist lb;
    InitList(&lb);
    for (i = 0; i < 10; i++)
    {
        InsertList(&lb, lb.length, rand() % 100);
    }
    SortList(&lb);
    printf("*****start traverse lb**********\n");
    TraverseList(lb);
    printf("*****end traverse lb**********\n");
    Lklist lc;
    InitList(&lc);
    MergeList(&la, &lb, &lc);
    printf("*****start traverse lc**********\n");
    TraverseList(lc);
    printf("*****end traverse lc**********\n");

#endif
#ifdef CIRCLE_LIST_TEST
    Lklist l;
    InitList(&l);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length, rand() % 100);
    }
    TraverseList(l);
    Status res = CheckCircle(l);
    printf("no circle linklist result %d\n", res);
    Node *n = l.head;
    while (n->next)
    {
        n = n->next;
    }
    n->next = l.head;
    res = CheckCircle(l);
    printf("circle linklist result %d\n", res);

#endif

    return 0;
}

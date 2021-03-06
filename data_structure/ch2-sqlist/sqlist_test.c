#include "sqlist.h"
#include <stdio.h>
#define MERGE_SQLIST_TEST

int main(int argc, const char *argv[])
{
#ifdef INIT_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
    }
#endif
#ifdef DESTROY_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    if (s == SUCCESS)
    {
        Status sd = DestroySqlist(&l);
        printf("destroy sqlist status %d\n", sd);
    }
#endif
#ifdef CLEAR_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
        ClearSqlist(&l);
        PrintSqlist(l);
    }
#endif
#ifdef LOCATE_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    int number = 21;
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
        int index = Locate(l, number, compare);
        printf("%d value in index %d\n", number, index);
    }
#endif
#ifdef PRE_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    int number = 21;
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
        int pre;
        Status sp = PreElem(l, number, &pre);
        if (sp == SUCCESS)
            printf("number %d before is %d\n", number, pre);
    }
#endif
#ifdef NEXT_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    int number = 49;
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
        int next;
        Status sp = NextElem(l, number, &next);
        if (sp == SUCCESS)
            printf("number %d before is %d\n", number, next);
    }
#endif
#ifdef INSERT_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
        int i;
        for (i = 0; i < 100; i++)
        {
            ListInsert(&l, l.length, i);
        }
        PrintSqlist(l);
    }
#endif
#ifdef DELETE_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        PrintSqlist(l);
        int i;
        for (i = 0; i < 10; i++)
        {
            ElemType e;
            ListDelete(&l, l.length - 1, &e);
            printf("list size:%d\n", l.listsize);
            PrintSqlist(l);
        }
    }
#endif
#ifdef TRAVERSE_SQLIST_TEST
    Sqlist l;
    Status s = InitSqlist(&l);
    if (s == SUCCESS)
    {
        RandomInitSqlist(&l);
        ListTraverse(l, visit);
    }
#endif
#ifdef UNION_SQLIST_TEST
    Sqlist la;
    Sqlist lb;
    InitSqlist(&la);
    InitSqlist(&lb);
    RandomInitSqlist(&la);
    RandomInitSqlist(&lb);
    UnionSqlist(&la, lb);
#endif
#ifdef SORT_SQLIST_TEST
    Sqlist l;
    InitSqlist(&l);
    RandomInitSqlist(&l);
    ListTraverse(l, visit);
    SortSqlist(&l);
    ListTraverse(l, visit);
#endif
#ifdef MERGE_SQLIST_TEST
    Sqlist la;
    Sqlist lb;
    InitSqlist(&la);
    InitSqlist(&lb);
    RandomInitSqlist(&la);
    RandomInitSqlist(&lb);
    SortSqlist(&la);
    SortSqlist(&lb);
    Sqlist lc;
    InitSqlist(&lc);
    printf("***la list****\n");
    ListTraverse(la, visit);
    printf("***lb list****\n");
    ListTraverse(lb, visit);
    MergeSqlist(la, lb, &lc);
    printf("***lc list****\n");
    ListTraverse(lc, visit);
#endif
    return 0;
}

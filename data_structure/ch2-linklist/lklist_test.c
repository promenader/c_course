#include "lklist.h"
#include <stdio.h>
#define GET_LIST_TEST

int main(int argc, char const *argv[])
{
#ifdef INSERT_LIST_TEST
    Lklist l;
    InitList(&l, 1);
    TraverseList(l);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length - 1, i);
    }
    TraverseList(l);
#endif
#ifdef GET_LIST_TEST
    Lklist l;
    InitList(&l, 1);
    int i;
    for (i = 0; i < 10; i++)
    {
        InsertList(&l, l.length - 1, i);
    }
    TraverseList(l);
    ElemType e;
    int index = 3;
    GetElem(l, index, &e);
    printf("index %d value %d\n", index, e);
#endif

    return 0;
}

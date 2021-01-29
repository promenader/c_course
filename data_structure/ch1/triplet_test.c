#include "triplet.h"
#include <stdio.h>
#define MIN_TEST

int main(int argc, const char *argv[])
{
#ifdef INIT_TRIPLET_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    PrintTriplet(t);
#endif
#ifdef DESTROY_TRIPLET_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    DestroyTriplet(&t);
#endif
#ifdef GET_TRIPLET_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    ElemType e;
    int index =0;
    Status s = Get(t,index,&e);
    if (s == SUCCESS){
        printf("index %d of t : %d\n",index,e);
    }
#endif
#ifdef PUT_TRIPLET_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    ElemType e = 10;
    int index = 0;
    Status s = Put(&t,index,e);
    if (s == SUCCESS){
        PrintTriplet(t);
    }
#endif
#ifdef ISASCENDING_TEST
    Triplet t;
    InitTriplet(&t,1,2,3);
    Status s = IsAscending(t);
    if(s == SUCCESS){
        printf("is ascending\n");
    }
#endif
#ifdef DESCENDING_TEST
    Triplet t;
    InitTriplet(&t,3,2,1);
    Status s = IsDescending(t);
    if(s == SUCCESS){
        printf("is descending\n");
    }
#endif
#ifdef MAX_TEST
    Triplet t;
    InitTriplet(&t,3,2,1);
    ElemType e;
    Status s = Max(t,&e);
    if(s == SUCCESS) {
        printf("max : %d\n",e);
    }
#endif
#ifdef MIN_TEST
    Triplet t;
    InitTriplet(&t,3,2,1);
    ElemType e;
    Status s = Min(t,&e);
    if(s == SUCCESS) {
        printf("min : %d\n",e);
    }
#endif


    return 0;
}

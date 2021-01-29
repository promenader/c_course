#include "triplet.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * Triplet*指向Triplet的指针
 */
Status InitTriplet(Triplet*  t, ElemType t1,ElemType t2,ElemType t3){
    *t = (Triplet)malloc(3*sizeof(ElemType));//*t 取值是个Elemtype*的指针
    if (!t){
        return ERROR;
    }
    (*t)[0]=t1;//一个分配了内存的Elemtype*指针和数组是等价的
    (*t)[1]=t2;
    (*t)[2]=t3;
    return SUCCESS;
}

Status PrintTriplet(const Triplet t){
    if (!t){
        return ERROR;
    }
    printf("Triplet: %d %d %d\n",t[0],t[1],t[2]);
    return SUCCESS;
}

Status DestroyTriplet(Triplet *t){
    if(!*t){
        return ERROR;
    }
    free(*t);
    return SUCCESS;
}

Status Get(Triplet t, int i,ElemType *e){
    if (i<0||i>2){
        return ERROR;
    }
    *e = t[i];
    return SUCCESS;
}

Status Put(Triplet* t, int i, ElemType e){
    if (i<0||i>2){
        return ERROR;
    }
    (*t)[i] = e;
    return SUCCESS;
}

Status IsAscending(Triplet t){
    if (!t) {
        return ERROR;
    }
    if (t[0]<t[1]&&t[1]<t[2]){
        return SUCCESS;
    }
    return ERROR;
}

Status IsDescending(Triplet t) {
    if(!t) {
        return ERROR;
    }
    if (t[0]>t[1]&&t[1]>t[2]){
        return SUCCESS;
    }
    return ERROR;
}

Status Max(Triplet t, ElemType *e){
    if(!t) {
        return ERROR;
    }
    *e = MAX(t[0],t[1]);
    *e = MAX(*e,t[2]);
    return SUCCESS;
}
Status Min(Triplet t, ElemType *e){
    if(!t) {
        return ERROR;
    }
    *e = MIN(t[0],t[1]);
    *e = MIN(*e,t[2]);
    return SUCCESS;
}

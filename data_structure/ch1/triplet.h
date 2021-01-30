#ifndef TRIPLET_H
#define TRIPLET_H

#include "../common.h"

typedef int ElemType;      //指定int的别名
typedef ElemType *Triplet; //指定指针Elemtype*的别名

Status InitTriplet(Triplet *t, ElemType t1, ElemType t2, ElemType t3);
Status PrintTriplet(const Triplet t);
Status DestroyTriplet(Triplet *t);
Status Get(Triplet t, int i, ElemType *e);
Status Put(Triplet *t, int i, ElemType e);
Status IsAscending(Triplet t);
Status IsDescending(Triplet t);
Status Max(Triplet t, ElemType *e);
Status Min(Triplet t, ElemType *e);
#endif

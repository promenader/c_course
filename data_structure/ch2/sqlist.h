#ifndef SQLIST_H
#define SQLIST_H

#include "../common.h"
#define SQ_LIST_SIZE 100
#define SQ_LIST_INCREMENT 10
typedef int ElemType; //指定int的别名
//顺序表
typedef struct {
    ElemType * e;
    int length;
    int listsize;
}Sqlist;

typedef int (*cp)(ElemType a,ElemType b); //指向函数的指针cp

Status InitSqlist(Sqlist *l);
Status RandomInitSqlist(Sqlist *l);
Status PrintSqlist(const Sqlist l);
Status DestroySqlist(Sqlist *l);
Status ClearSqlist(Sqlist *l);
Status GetElem(const Sqlist l, int index, ElemType *e);
int Locate(const Sqlist l, ElemType e, int (*cp)(ElemType a,ElemType b));
int compare (ElemType a, ElemType b);
Status PreElem(const Sqlist l, ElemType cur_e, ElemType * pre_e);
Status NextElem(const Sqlist l, ElemType cur_e, ElemType *next_e);
#endif

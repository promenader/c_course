#ifndef SQLIST_H
#define SQLIST_H

#include "../common.h"
#define SQ_LIST_SIZE 100
#define SQ_LIST_INCREMENT 10
typedef int ElemType; //指定int的别名
//顺序表
typedef struct
{
    ElemType *e;
    int length;
    int listsize;
} Sqlist;

typedef int (*cp)(ElemType a, ElemType b); //指向函数指针类型cp
typedef void (*pvisit)(ElemType a);        //定义函数指针类型pvisit

Status InitSqlist(Sqlist *l);
Status RandomInitSqlist(Sqlist *l);
Status PrintSqlist(const Sqlist l);
Status DestroySqlist(Sqlist *l);
Status ClearSqlist(Sqlist *l);
Status GetElem(const Sqlist l, int index, ElemType *e);
int Locate(const Sqlist l, ElemType e, int (*cp)(ElemType a, ElemType b));
int compare(ElemType a, ElemType b);
Status PreElem(const Sqlist l, ElemType cur_e, ElemType *pre_e);
Status NextElem(const Sqlist l, ElemType cur_e, ElemType *next_e);
Status ListInsert(Sqlist *l, int index, ElemType e);
Status ListDelete(Sqlist *l, int index, ElemType *e);
Status ListTraverse(const Sqlist l, void (*pvisit)(ElemType a));
void visit(ElemType a);
#endif

#include "stlist.h"
#include <stdlib.h>
#include <stdio.h>

Status InitStlist(Stl *l)
{
    Component *space = (Component *)malloc(MAXSIZE * sizeof(Component));
    if (!space)
    {
        return ERROR;
    }
    l->dnode = space;
    l->dnode->cur = 0;
    l->dnode->data = 0;
    l->size = MAXSIZE - 1;
    l->length = 0;
    l->nnode = space + 1;
    int i;
    for (i = 0; i < l->size; i++)
    {
        (l->nnode + i)->cur = i + 1;
        (l->nnode + i)->data = 0;
    }
    (l->nnode + i)->cur = 0;

    return SUCCESS;
}
Status PrintStlist(Stl l)
{
    Component *n = l.dnode;
    printf("****data node*******\n");
    n += n->cur;
    while (n->cur != 0)
    {
        printf("%d\t", n->data);
        n = l.dnode + (n->cur);
    }
    printf("\n****data node*******\n");
    Component *nn = l.nnode;
    printf("****empty node*****\n");
    while (nn->cur != 0)
    {
        printf("%d\t", nn->data);
        nn = l.nnode + nn->cur;
    }
    printf("\n****empty node*****\n");
    return SUCCESS;
}
Status InsertStlist(Stl *l, int index, ElemType e)
{
    if (index < 0 || index >= l->length)
    {
        return ERROR;
    }
    if (!l->nnode)
    {
        return ERROR;
    }
    int step = l->nnode - l->dnode;
    // Component *n = l->node;
    // n = n + l->length + 1;
}
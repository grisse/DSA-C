#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

void destory(void *data)
{
    free(data);
}

int main()
{
    DList *dlist = (DList *)malloc(sizeof(DList));

    int data = 100;
    dlist_init(dlist, destory);
    int n = dlist_ins_next(dlist,NULL,&data);

    printf("%d\n",*(int *)dlist_data(dlist->head));

    return 0;
}
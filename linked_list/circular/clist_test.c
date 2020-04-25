#include "clist.h"
#include <stdio.h>

void destory(void *data)
{
    free(data);
}

int main()
{
    CList *list = (CList *)malloc(sizeof(CList));
    
    clist_init(list,destory);

    int data = 100;
    clist_ins_next(list,NULL,&data);

    printf("%d",*(int *)clist_data(list->head));

    return 0;
}
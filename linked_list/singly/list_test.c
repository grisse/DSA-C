#include "list.h"
#include <stdio.h>

void destory(void *data)
{
    free(data);
}

int main()
{
    List *list = (List *)malloc(sizeof(List));
    
    list_init(list,destory);

    int data = 100;
    list_ins_next(list,NULL,&data);

    printf("%d",*(int *)list_data(list->head));

    return 0;
}
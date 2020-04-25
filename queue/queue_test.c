#include "queue.h"
#include <stdio.h>

void destory(void *data)
{
    free(data);
}

int main()
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    
    queue_init(queue,destory);

    int data = 100;
    queue_enqueue(queue, &data);

    printf("%d",*(int *)queue_peek(queue));

    return 0;
}
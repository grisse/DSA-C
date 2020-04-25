#include "stack.h"
#include <stdio.h>

void destory(void *data)
{
    free(data);
}

int main()
{
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    
    stack_init(stack,destory);

    int data = 100;
    stack_push(stack, &data);

    printf("%d",*(int *)stack_peek(stack));

    return 0;
}
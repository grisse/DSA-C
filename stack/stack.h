#ifndef DSA_C_STACK_H
#define DSA_C_STACK_H
#include <stdlib.h>
#include "../linked_list/singly/list.h"

typedef List Stack;

#define stack_init list_init
#define stack_destory list_destory
int stack_push(Stack *stack, const void *data);
int stack_pop(Stack *stack, void **data);
#define stack_peek(stack) ( (stack)->head == NULL ? NULL : (stack)->head->data )
#define stack_size list_size

#endif  //DSA_C_STACK_H
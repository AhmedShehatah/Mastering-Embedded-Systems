#include "stack.h"
#include "stdlib.h"

stack_status_t stack_init(stack_t *stack, int size)
{
    // check if given stack == null
    if (stack == NULL)
        return stack_null;
    stack->size = size;
    stack->data = (stack_data_type *)malloc(size * sizeof(stack_data_type));
    // check if data allocated successfully
    if (stack->data == NULL)
        return stack_null;
    stack->top = -1;
    return stack_no_error;
}
stack_status_t stack_push(stack_t *stack, stack_data_type element)
{
    // check if data == null
    if (stack == NULL || stack->data == NULL)
        return stack_null;

    // check stack is full
    if (stack->top == stack->size - 1)
        return stack_full;
    stack->top++;
    stack->data[stack->top] = element;
    return stack_no_error;
}
stack_status_t stack_pop(stack_t *stack, stack_data_type *destination)
{
    // check if data == null
    if (stack == NULL || stack->data == NULL)
        return stack_null;
    // check stack is empty
    if (stack->top == -1)
        return stack_empty;
    *destination = stack->data[stack->top];
    stack->top--;
    return stack_no_error;
}
stack_status_t stack_top(stack_t *stack, stack_data_type *destination)
{
    // check if data == null
    if (stack == NULL || stack->data == NULL)
        return stack_null;
    // check stack is empty
    if (stack->top == -1)
        return stack_empty;
    *destination = stack->data[stack->top];
    return stack_no_error;
}
stack_status_t stack_is_full(stack_t *stack)
{
    return (stack->top == stack->size - 1) ? stack_full : stack_no_error;
}
stack_status_t stack_is_empty(stack_t *stack)
{
    return (stack->top == -1) ? stack_empty : stack_no_error;
}
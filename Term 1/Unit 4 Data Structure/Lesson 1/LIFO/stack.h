#ifndef STACK_H_
#define STACK_H_
#include "stdio.h"
#include "stdint.h"
// define the data type of the stack here
#define stack_data_type uint32_t

typedef struct
{
    int size;              // maximum size of stack
    stack_data_type *data; // pointer to the data array
    int top;               // index of top index

} stack_t;

typedef enum
{
    stack_full,     // indicates full state
    stack_empty,    // indicates empty state
    stack_no_error, // indicates no error state
    stack_null,     // indicates null state
} stack_status_t;

stack_status_t stack_init(stack_t *stack, int size);                    // init new stack
stack_status_t stack_push(stack_t *stack, stack_data_type element);     // push new element into stack
stack_status_t stack_pop(stack_t *stack, stack_data_type *destination); // pop element from stack and return popped value in destination variable
stack_status_t stack_top(stack_t *stack, stack_data_type *destination); // get stack top and store it in destination variable
stack_status_t stack_is_full(stack_t *stack);                           // returns status of stack
stack_status_t stack_is_empty(stack_t *stack);                          // return empty status of stack
#endif
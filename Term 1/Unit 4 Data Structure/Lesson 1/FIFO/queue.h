#ifndef QUEUE_H_
#define QUEUE_H_
#include "stdio.h"
#include <stdlib.h>
#include <stdbool.h>
#define queue_data_type int
typedef struct
{
    queue_data_type *data;
    int capacity;
    int size;
    int front;
    int rear;
} Queue;

Queue *queue_create(int capacity);
bool queue_is_empty(Queue *queue);
bool queue_is_full(Queue *queue);
bool queue_enqueue(Queue *queue, queue_data_type item);
queue_data_type queue_dequeue(Queue *queue);
queue_data_type queue_peek(Queue *queue);
void queue_destroy(Queue *queue);
#endif
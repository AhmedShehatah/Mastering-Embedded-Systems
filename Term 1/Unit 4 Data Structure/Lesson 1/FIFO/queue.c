#include <stdlib.h>
#include <stdbool.h>
#include "queue.h"

Queue *queue_create(int capacity)
{
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    if (queue == NULL)
    {
        return NULL; // Failed to allocate memory for the queue
    }

    queue->data = (int *)malloc(capacity * sizeof(queue_data_type));
    if (queue->data == NULL)
    {
        free(queue);
        return NULL; // Failed to allocate memory for the data array
    }

    queue->capacity = capacity;
    queue->size = 0;
    queue->front = 0;
    queue->rear = -1;

    return queue;
}

bool queue_is_empty(Queue *queue)
{
    return queue->size == 0;
}

bool queue_is_full(Queue *queue)
{
    return queue->size == queue->capacity;
}

bool queue_enqueue(Queue *queue, queue_data_type item)
{
    if (queue_is_full(queue))
    {
        return false; // Queue is already full
    }

    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->data[queue->rear] = item;
    queue->size++;

    return true;
}

queue_data_type queue_dequeue(Queue *queue)
{
    if (queue_is_empty(queue))
    {
        return -1; // Queue is empty
    }

    int item = (queue->data[queue->front]);
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;

    return item;
}

queue_data_type queue_peek(Queue *queue)
{
    if (queue_is_empty(queue))
    {
        return -1; // Queue is empty
    }

    return queue->data[queue->front];
}

void queue_destroy(Queue *queue)
{
    free(queue->data);
    free(queue);
}
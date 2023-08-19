#include "queue.h"
#include "stdio.h"
int main()
{

    printf("Enter queue Size: ");
    int n;
    scanf("%d", &n);
    Queue *queue = queue_create(n);
    printf("Enter queue Elements: ");
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        queue_enqueue(queue, x);
    }
    for (int i = 0; i < n; i++)
        printf("fornt: %d\n", queue_dequeue(queue));
    queue_destroy(queue);
}

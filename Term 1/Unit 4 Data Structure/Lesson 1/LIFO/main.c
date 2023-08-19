#include "stdio.h"
#include "stack.h"

int main()
{
    stack_t *stack;
    printf("Enter Stack Size: ");
    int n;
    scanf("%d", &n);
    stack_init(stack, n);
    printf("Enter Stack Elements: ");
    for (int i = 0; i < n; i++)
    {
        uint32_t x;
        scanf("%d", &x);
        stack_push(stack, x);
    }

    while (1)
    {
        printf("\n =========================\n");
        printf("Menu:\n");
        printf("1. Print Top\n");
        printf("2. Pop\n");
        printf("3. Print All Stack & clear\n");
        printf("4. Push Element\n");
        printf("5. Exit\n");
        int op;
        scanf("%d", &op);
        int temp;
        switch (op)
        {
        case 5:
            return 0;
        case 1:
            if (stack_top(stack, &temp) == stack_no_error)
                printf("Top: %d\n", temp);
            else
                printf("Can't print Top\n");
            break;
        case 2:
            if (stack_pop(stack, &temp) == stack_no_error)
                printf("Poped Elmenet: %d\n", temp);
            else
                printf("Can't POP\n");
            break;
        case 3:
            for (int i = stack->top; i >= 0; i--)
                if (stack_pop(stack, &temp) == stack_no_error)
                    printf("Top: %d\n", temp);
            break;
        case 4:
            scanf("%d", &temp);
            if (stack_push(stack, temp) == stack_no_error)
                printf("Pushed\n");
            else
                printf("Can't push");
            break;
        }
    }
}
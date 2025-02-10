#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
void pushed(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow! Cannot pushed %d to the stack.\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int popped(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack underflow! Cannot pop from the stack.");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int stackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int stackBottom(struct stack *sp){
    return sp->arr[0];
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been created successfully!\n");

    printf("Before pushing, Full: %d\n", isFull(sp));
    printf("Before pushing, Empty: %d\n", isEmpty(sp));
    pushed(sp, 43); // bottom most(first in)
    pushed(sp, 11);
    pushed(sp, 7);
    pushed(sp, 99);
    pushed(sp, 3);
    pushed(sp, 22);
    pushed(sp, 14);
    pushed(sp, 76);
    pushed(sp, 59);
    pushed(sp, 10); // top most(last in)
    

    printf("The top most value of this stack is %d\n", stackTop(sp));
    printf("The bottom most value this stack is %d\n", stackBottom(sp));

    return 0;
}
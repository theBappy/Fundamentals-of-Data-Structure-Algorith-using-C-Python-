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
int peeked(struct stack *sp, int i){
    int arrayInd = sp->top - i + 1 ;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack");
        return -1;
    }
    else{
        return sp->arr[arrayInd];
    }
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
    pushed(sp, 5);
    pushed(sp, 35);
    pushed(sp, 78);
    pushed(sp, 19);
    pushed(sp, 22);
    pushed(sp, 71);
    pushed(sp, 24);
    pushed(sp, 6);
    pushed(sp, 9);
    pushed(sp, 55); 
    
     
    // printing values from the stack
    for(int j = 1; j <= sp->top + 1; j++){    
    printf("The value at index %d is %d\n", j , peeked(sp, j));
    }

    return 0;
}
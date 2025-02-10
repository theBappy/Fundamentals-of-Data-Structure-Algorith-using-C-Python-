#include<stdio.h>
#include<stdlib.h>


struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if(isEmpty(q)){
        printf("The queue is full.\n");
    }
    else{
        q->f++;
        a =  q->arr[q->f];
    }
    return a;
}
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}


int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int main(){
    struct queue q;
    q.size = 10;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1);

    printf("Dequequing element %d\n", dequeue(&q));
    printf("Dequequing element %d\n", dequeue(&q));
    

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    };
    if(isFull(&q)){
        printf("Queue is full\n");
    };

    return 0;

}
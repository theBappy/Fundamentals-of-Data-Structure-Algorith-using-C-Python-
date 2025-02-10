#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int findLowestValue(struct Node *head){
    int minValue = head->data;
    struct Node *currentNode = head->next;
    while(currentNode){
        if(currentNode->data < minValue){
            minValue = currentNode->data;
        }
        currentNode = currentNode->next;
    }
    return minValue;
}

int findHighestValue(struct Node *head){
    int maxValue = head->data;
    struct Node * currentNode = head->next;
    while(currentNode){
        if(currentNode->data > maxValue){
            maxValue = currentNode->data;
        }
        currentNode = currentNode->next;
    }
    return maxValue;
}
int main(){
    struct Node *node1 = (Node*)malloc(sizeof(Node));
    struct Node *node2 = (Node*)malloc(sizeof(Node));
    struct Node *node3 = (Node*)malloc(sizeof(Node));
    struct Node *node4 = (Node*)malloc(sizeof(Node));
    struct Node *node5 = (Node*)malloc(sizeof(Node));
    
    node1->data = 6;
    node2->data = 67;
    node3->data= 45;
    node4->data = 34;
    node5->data = 78;


    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    printf("The lowest value in the linked list is :  %d\n", findLowestValue(node1));
    printf("The highest value in the linked list is :  %d\n", findHighestValue(node1));

    return 0;
}

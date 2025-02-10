#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
}Node;

int main(){
    Node *node1 =(Node*)malloc(sizeof(Node));
    Node *node2 = (Node*)malloc(sizeof(Node));
    Node *node3 = (Node*)malloc(sizeof(Node));
    Node *node4 = (Node*)malloc(sizeof(Node));

    node1->data = 5;
    node2->data = 8;
    node3->data = 15;
    node4->data = 20;

    node1->next = node2;
    node1->prev = node4;

    node2->next = node3;
    node2->prev = node1;

    node3->next = node4;
    node3->prev = node2;

    node4->prev = node3;
    node4->next = node1;

    printf("\nTraversing Forward: ");
    Node *currentNode = node1;
    Node *startNode = node1;

    printf("%d ->", currentNode->data);
    currentNode= currentNode->next;

    while(currentNode != startNode){
        printf("%d ->", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("...");

    printf("\nTraversing Backward: ");
    currentNode = node4;
    startNode = node4;
    printf("%d ->", currentNode->data);
    currentNode = currentNode->prev;

    while(currentNode != startNode){
        printf("%d ->", currentNode->data);
        currentNode = currentNode->prev;
    }
    printf("...");

    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
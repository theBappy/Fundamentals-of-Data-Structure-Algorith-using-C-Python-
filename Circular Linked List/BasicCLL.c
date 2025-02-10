#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main(){
    Node *node1 = (Node*)malloc(sizeof(Node));
    Node *node2 = (Node*)malloc(sizeof(Node));
    Node *node3 = (Node*)malloc(sizeof(Node));
    Node *node4 = (Node*)malloc(sizeof(Node));

    node1->data = 6;
    node2->data = 8;
    node3->data = 3;
    node4->data = 16;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node1;

    Node *currentNode = node1;
    Node *startNode = node1;

    printf("%d ->", currentNode->data);
    currentNode = currentNode->next;

    while(currentNode != startNode){
        printf("%d -> ",currentNode->data);
        currentNode = currentNode->next;
    }
    printf("...\n");
    free(node1);
    free(node2);
    free(node3);
    free(node4);

    return 0;
}
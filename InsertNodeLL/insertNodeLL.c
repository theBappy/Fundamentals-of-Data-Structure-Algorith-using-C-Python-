#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

void traverseAndPrint(Node *head){
    Node *currentNode = head;
    while(currentNode != NULL){
        printf("%d ->", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("null\n");
}

Node *insertAtPosition(Node *head, Node *newNode, int position){
    if(position == 1){
        newNode->next = head;
        return newNode;
    }
    Node *currentNode = head;
    for(int i = 1; i<position-1 && currentNode != NULL; i++){
        currentNode = currentNode->next;
    }
    if(currentNode != NULL){
        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }
    return head;
}

int main(){
    Node *node1 = (Node*)malloc(sizeof(Node));
    Node *node2 = (Node*)malloc(sizeof(Node));
    Node *node3 = (Node*)malloc(sizeof(Node));
    Node *node4 = (Node*)malloc(sizeof(Node));
    Node *node5 = (Node*)malloc(sizeof(Node));

    node1->data = 5;
    node2->data = 7;
    node3->data = 14;
    node4->data = 34;
    node5->data = 67;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    printf("Original list:\n");
    traverseAndPrint(node1);

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = 33;
    node1 = insertAtPosition(node1, newNode, 2);

    printf("After insertion:\n");
    traverseAndPrint(node1);

    free(node1);
    free(node2);
    free(node3);
    free(node4);
    free(node5);
    
    return 0;

}
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * deleteFirstNode(struct Node *head){
    struct Node *ptr =  head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;

    for(int i = 0; i<index-1; i++){
     p = p->next;
     q = q ->next;   
    }
    p->next = q ->next;
    free(q);
    return head;
}

struct Node * deleteLastElement(struct Node * head){
    struct Node *p= head;
    struct Node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q-> next;
    }
    p->next = NULL;
    free(q);
    return head;
}

struct Node * deleteNodeGivenValue(struct Node * head, int value){
    struct Node * p = head;
    struct  Node * q = head->next;
    while(q->data != value && q->next!=NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // allocate memory for nodes in the linked list in HEAP
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // linking first and second node
    head->data = 13;
    head->next = second;

    // linking second and third node
    second->data = 22;
    second->next = third;

    // linking third and fourth node
    third->data = 8;
    third->next = fourth;

    // terminate the list at the third node
    fourth->data = 41;
    fourth->next = NULL;
     
    
    printf("Linked list before deletion\n");
    linkedListTraversal(head);


    // head = deleteFirstNode(head); // first element in the linked list
    
    // head = deleteAtIndex(head, 2); 

    // head = deleteLastElement(head);

    head = deleteNodeGivenValue(head, 8);
    printf("Linked list after deletion\n");
    linkedListTraversal(head);


    return 0;
}
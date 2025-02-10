#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is : %d\n", ptr->data);
        ptr = ptr->next;
    }
    while (ptr != head);
}

struct Node *insertAtFirst(struct Node *head, int data){
    struct Node *ptr =(struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head->next;
    while(p->next != head){
        p = p->next;
    } 
    // at this point p points to the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;

    head = ptr;
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
    head->data = 4;
    head->next = second;

    // linking second and third node
    second->data = 3;
    second->next = third;

    // linking third and fourth node
    third->data = 6;
    third->next = fourth;

    // terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;
    

    printf("Circular Linked List before insertion\n");
    linkedListTraversal(head);
    printf("\n");

    
    head = insertAtFirst(head, 11);
    // head = insertAtFirst(head, 35);
    // head = insertAtFirst(head, 77);
    printf("Circular Linked List after insertion\n");
    linkedListTraversal(head);

    return 0;
}
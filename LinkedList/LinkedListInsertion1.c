#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// insert at the beginning
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next= head;
    ptr->data = data;
    return ptr;
}

// insert in between
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    
    int i = 0;
    while(i != index -1){
        p = p->next;
        i++;
    }
    
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

// insert at the end 
struct Node * insertAtTheEnd(struct Node * head, int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;

    while(p->next != NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;

    return head;
}

// insert after a node
struct Node *insertAfterNode(struct Node *head, struct Node *prevNode, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    
    ptr->next = prevNode->next;
    prevNode->next = ptr;

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
    head->data = 7;
    head->next = second;

    // linking second and third node
    second->data = 11;
    second->next = third;

    // linking third and fourth node
    third->data = 41;
    third->next = fourth;

    // terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);

    // head = insertAtFirst(head, 31);
    // linkedListTraversal(head);

    // head = insertAtIndex(head, 31, 2);
    // linkedListTraversal(head);

    // head = insertAtTheEnd(head, 31);
    // linkedListTraversal(head);

    printf("\nLinked list after insertion\n");
    head = insertAfterNode(head, third, 25);
    linkedListTraversal(head);

    return 0;
}
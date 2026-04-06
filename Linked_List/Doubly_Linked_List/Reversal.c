#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};
void insert(struct Node** head, int data)
{
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode -> data = data;
    newNode -> prev = NULL;
    newNode -> next = *head;
    if (*head != NULL)
    {
        (*head) -> prev = newNode;
    }
    *head = newNode;
}
void reverse(struct Node** head)
{
    struct Node* temp = NULL;
    struct Node* current = *head;
    while (current != NULL)
    {
        temp = current -> prev;
        current -> prev = current -> next;
        current -> next = temp;
        current = current -> prev;
    }
    if (temp != NULL)
    {
        *head = temp -> prev;
    }
}
void display(struct Node* head)
{
    while (head != NULL)
    {
        printf("%d", head -> data);
        head = head -> next;
    }
}
int main(void)
{
    struct Node* head = NULL;
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    printf("Original List: ");
    display(head);
    reverse(&head);
    printf("\nReversed List: ");
    display(head);
}
#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next, *prev;
} node;
node * head = NULL;
void display(){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }
    node *temp=head;
    while (temp!=NULL){
        printf("%d<->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
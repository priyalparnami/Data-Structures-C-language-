#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next, *prev;
} node;
node *head=NULL;
void insertEnd(int val){
    node *new=(node *)malloc(sizeof(node));
    if (new==NULL){
        printf("Memory not allocated\n");
        return;
    }
    new->data=val;
    new->next=NULL;
    if (head==NULL){
        new->prev=NULL;
        head=new;
        printf("Node inserted successfully\n");
        return;
    }
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    new->prev=temp;
    temp->next=new;
    printf("Node inserted successfully\n");
}
int main(void){
    insertEnd(8);
}
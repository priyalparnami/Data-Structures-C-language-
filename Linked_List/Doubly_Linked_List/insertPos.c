#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next, *prev;
} node;
node *head=NULL;
void insertPos(int val, int pos){
    node *new=(node *)malloc(sizeof(node));
    if (new==NULL){
        printf("Memory not allocated\n");
        return;
    }
    new->data=val;
    if (pos==0){
        new->prev=NULL;
        new->next=head;
        if (head!=NULL){
            head->prev=new;
        }
        head=new;
        printf("Node inserted successfully\n");
        return;
    }
    node *temp=head;
    int i;
    for (i=0;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Invalid location\n");
        free(new);
        return;
    }
    if (temp->next==NULL){
        temp->next=new;
        new->prev=temp;
        new->next=NULL;
        return;
    }
    new->next=temp->next;
    new->prev=temp;
    temp->next->prev=new;
    temp->next=new;
    printf("Node inserted successfully\n");
}
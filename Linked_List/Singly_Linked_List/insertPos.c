#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;
node * head = NULL;
void insertPos(int val, int pos){
    if (pos<0){
        printf("Invalid position\n");
        return;
    }
    node * new = (node *)malloc(sizeof(node));
    node *temp;
    if (new==NULL){
        printf("Memory not allocated\n");
        return;
    }
    new->data=val;
    new->next=NULL;
    if (pos==0){
        new->next=head;
        head=new;
        printf("Node inserted successfully\n");
        return;
    }
    temp=head;
    int i;
    for (i=0; i<pos-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Position out of range\n");
        free(new);
        return;
    }
    new->next = temp->next;
    temp->next = new;
    printf("Node inserted successfully\n");
}
int main(void){
    insertPos(8, 0);
}
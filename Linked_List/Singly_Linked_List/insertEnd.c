#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;
node * head = NULL;
void insertEnd(int val){
    node * new = (node *)malloc(sizeof(node));
    if (new==NULL){
        printf("Memory not allocated\n");
        return;
    }
    new->data=val;
    new->next=NULL;
    if (head==NULL){
        head=new;
        printf("Node inserted successfully\n");
        return;
    }
    else if(head->next==NULL){
        head->next=new;
        printf("Node inserted successfully\n");
    }
    else{
        node *temp = head;
        while (temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new;
        new->next=NULL;
    }
    printf("Node inserted successfully\n");
}
int main(void){
    insertEnd(8);
}
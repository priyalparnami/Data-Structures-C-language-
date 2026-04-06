#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next, *prev;
} node;
node * head=NULL;
void delEnd(){
    if (head==NULL){
        printf("List is empty\nNothing to delete\n");
        return;
    }
    node *temp=head;
    if (head->next==NULL){
        head=NULL;
    }
    else{
        while(temp->next!=NULL){
        temp=temp->next;
        }
    }
    free(temp);
    printf("Node deleted successfully\n");
}
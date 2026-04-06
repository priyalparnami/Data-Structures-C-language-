#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next, *prev;
} node;
node *head=NULL;
void delPos(int val, int pos){
    if (head==NULL){
        printf("List is empty\nNothing to delete\n");
        return;
    }
    if (pos<0){
        printf("Invalid location\n");
        return;
    }
    node *temp=head;
    if (pos==0){
        head=head->next;
        if (head!=NULL){
            head->prev=NULL;
        }
        free(temp);
        printf("Node deleted successfully\n");
        return;
    }
    int i;
    for (i=0;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    if (temp==NULL){
        printf("Invalid location\n");
        return;
    }
    if (temp->next!=NULL){
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
    }
    else{
        temp->prev->next=NULL;
    }
    free(temp);
    printf("Node deleted successfully\n");
}
int main(void){
    delPos(2,0);
}
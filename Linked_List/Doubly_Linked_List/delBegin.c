#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next, *prev;
} node;
node *head=NULL;
void delBegin(){
    if (head==NULL){
        printf("List is empty\nNothing to delete\n");
        return;
    }
    node *temp=head;
    if (head->next=NULL){
        head=NULL;
    }
    else{
        head=head->next;
        head->prev=NULL;
    }
}
int main(void){
    delBegin();
}
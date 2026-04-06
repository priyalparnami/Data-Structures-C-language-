#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next, *prev;
} node;
node * head=NULL;
void insertBegin(int val){
    node * new=(node *)malloc(sizeof(node));
    if (new==NULL){
        printf("Memory not allocated\n");
        return;
    }
    new->data=val;
    new->prev=NULL;
    new->next=head;
    if (head!=NULL){
        head->prev=new;
    }
    head=new;
    printf("Node inserted successfully\n");
}
int main(void){
    insertBegin(8);
}
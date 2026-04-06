#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;
node * head = NULL;
void insertBegin(int val){
    node * new = (node *)malloc(sizeof(node));
    if (new == NULL){
        printf("Memory not allocated\n");
        return;
    }
    if (head==NULL){
        new->data=val;
        new->next=NULL;
        head=new;
    }
    else{
        new->data=val;
        new->next=head;
        head=new;
    }
    printf("Node inserted successfully\n");
}
int main(void){
    insertBegin(8);
}
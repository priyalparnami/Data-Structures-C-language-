#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;
node * head = NULL;
void traverse(){
    if (head==NULL){
        printf("List is empty\n");
        return;
    }
    node *temp=head;
    while (temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main (void){
    traverse();
}
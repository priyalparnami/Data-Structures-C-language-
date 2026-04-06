#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    int * next;
} node;
node * head = NULL;
void delEnd(){
    node * temp=head;
    if (head == NULL){
        printf("List is empty\n Nothing to delete\n");
        return;
    }
    else if (head->next=NULL){
        free(head);
        head = NULL;
        printf("Node deleted successfully\n");
        return;
    }
    node *p = NULL;
    while (temp->next!=NULL){
        p=temp;
        temp=temp->next;
    }
    p->next=NULL;
    free(temp);
    printf("Node deleted successfully\n");
}
int main (void){
    delEnd();
}
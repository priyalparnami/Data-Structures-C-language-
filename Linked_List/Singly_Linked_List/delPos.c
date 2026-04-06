#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;
node * head = NULL;
void delPos(int pos){
    if (head=NULL){
        printf("List is empty\nNothing to delete\n");
        return;
    }
    else if (pos<0){
        printf("Invalid position\n");
    }
    else if (pos==0){
        node *temp;
        temp=head;
        head=head->next;
        free(temp);
        printf("Node deleted successfully\n");
        return;
    }
    node * temp=head;
    int i;
    for (i=0; i<pos-1 && temp!=NULL; i++){
        temp=temp->next;
    }
    if (temp==NULL || temp->next==NULL){
        printf("Position out of range\n");
        return;
    }
    node *p=temp->next;
    temp->next=p->next;
    free(p);
    printf("Node deleted successfully\n");
}
int main(void){
    delPos(0);
}
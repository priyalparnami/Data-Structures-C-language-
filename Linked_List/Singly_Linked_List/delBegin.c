#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;
node * head = NULL;
void delBegin(){
    if (head == NULL){
        printf("List is empty\nNothing to delete\n");
        return;
    }
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
    printf("Node deleted successfully\n");
}
int main (void){
    delBegin();
}
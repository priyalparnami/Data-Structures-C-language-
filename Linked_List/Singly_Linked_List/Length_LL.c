#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
//Finding length of linked list- Count until head is null
int length(struct node *head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head -> next;
        }
        return count;
    }
int main(void)
{
    printf("Code executed successfully\n");
}
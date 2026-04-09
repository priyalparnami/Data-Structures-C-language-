#include <stdio.h>
#include <string.h>
#define MAX 100
char stack[MAX];
int top = -1;

int isBalanced(char s[]) {
    int i = 0;
    char c;

    top = -1;

    while (s[i] != '\0') {
        c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }

        else if (c == ')' || c == '}' || c == ']') {

            if (top == -1)
                return 0;

            char t = stack[top--];

            if ((c == ')' && t != '(') ||
                (c == '}' && t != '{') ||
                (c == ']' && t != '[')) {
                return 0;
            }
        }

        i++;
    }

    if (top == -1)
        return 1;
    else
        return 0;
}

int main(void) {
    char s[100];

    printf("Enter expression: ");
    scanf("%s", s);

    if (isBalanced(s))
        printf("Balanced\n");
    else
        printf("Not Balanced\n");
}
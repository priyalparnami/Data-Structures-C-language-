#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push
void push(char x) {
    if (top == MAX - 1)
        return;
    stack[++top] = x;
}

// Pop
char pop() {
    if (top == -1)
        return '\0';
    return stack[top--];
}

// Check matching pair
int isMatchingPair(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

// Main logic
int isBalanced(char exp[]) {
    for (int i = 0; i < strlen(exp); i++) {

        // If opening bracket → push
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(exp[i]);
        }

        // If closing bracket → check
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {

            if (top == -1)
                return 0;

            char popped = pop();

            if (!isMatchingPair(popped, exp[i]))
                return 0;
        }
    }

    // If stack is empty → balanced
    return (top == -1);
}

// Main function
int main() {
    char exp[100];

    printf("Enter expression: ");
    scanf("%s", exp);

    if (isBalanced(exp))
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    char data[MAX];
    int top;
} Stack;

void initStack(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char ch) {
    if (s->top < MAX - 1) {
        s->data[++s->top] = ch;
    }
}

char pop(Stack *s) {
    if (s->top != -1) {
        return s->data[s->top--];
    }
    return '\0';
}

int isMatching(char open, char close) {
    if (open == '(' && close == ')') return 1;
    if (open == '{' && close == '}') return 1;
    if (open == '[' && close == ']') return 1;
    return 0;
}

int isBalanced(char exp[]) {
    Stack s;
    int i = 0;
    char temp;

    initStack(&s);

    while (exp[i] != '\0') {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
            push(&s, exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (s.top == -1)
                return 0;

            temp = pop(&s);
            if (!isMatching(temp, exp[i]))
                return 0;
        }
        i++;
    }

    return (s.top == -1);
}

int main() {
    char exp[100];

    printf("Enter expression: ");
    gets(exp);

    if (isBalanced(exp))
        printf("Expression has BALANCED parentheses.\n");
    else
        printf("Expression has UNBALANCED parentheses.\n");

    return 0;
}

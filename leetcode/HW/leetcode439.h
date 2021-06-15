//
// Created by Peixiao on 2021/6/15.
//

#ifndef HW_LEETCODE439_H
#define HW_LEETCODE439_H

#endif //HW_LEETCODE439_H

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack {
    int top;
    unsigned capacity;
    char *array;
};

struct Stack *createStack(unsigned capacity) {
    struct Stack *stack = (struct Stack *) malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (char *) malloc(stack->capacity * sizeof(int));
    return stack;
}

int isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

void push(struct Stack *stack, char item) {
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
}

void pop(struct Stack *stack) {
    if (isEmpty(stack))
        return;

    stack->top--;
}

char peek(struct Stack *stack) {
    return stack->array[stack->top];
}

int parseTernary() {
    // please define the C input here. For example: int n; scanf("%d",&n);
    char expression[10001];
    scanf("%s", expression);
    int len = strlen(expression);
    struct Stack *stack = createStack(10001);

    for (int i = len - 1; i >= 2; i -= 2) {
        if (expression[i - 1] == ':') {
            push(stack, expression[i]);
        }
        else{
            expression[i - 2] = expression[i - 2] == 'T' ? expression[i] : peek(stack);
            pop(stack);
        }
    }

    printf("%c", expression[0]);
    return 0;
}




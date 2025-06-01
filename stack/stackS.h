#pragma once
#define STACKS_SIZE 100

typedef int element;
element stack[STACKS_SIZE];

int isStackEmpty(void);
int isStackFull(void);
void push(element item);
element pop(void);
element peek(void);
void printStack(void);

#ifndef SRC_SOURCE_CALC_H_
#define SRC_SOURCE_CALC_H_

#include <stdio.h>
#include <stdlib.h>

#define STACK_OVERFLOW -100
#define STACK_UNDERFLOW -101
#define OUT_OF_MEMORY -102
#define INVALID_VALUE 0 // ???

typedef struct OP_Struct {
    double num;
    struct OP_Struct *next;
} num_stack;

typedef struct Num_Struct {
    char fuction;
    struct Num_Struct *next;
} op_stack;

void push(Stack **head, T value);
Stack* pop1(Stack **head);
T pop2(Stack **head);
T peek(const Stack* head);
void printStack(const Stack* head);
size_t getSize(const Stack *head);

#endif // SRC_SOURCE_CALC_H_
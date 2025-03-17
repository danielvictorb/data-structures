#include <stdio.h>
#include <stdlib.h>

#define N 50

typedef struct{
    int v[50];
    int ctr;
}Stack;

Stack* create_stack();
void push(Stack *stack, int v);
int pop(Stack *stack);
int empty_stack(Stack *stack);
void free_stack(Stack *stack);

int empty_stack(Stack *stack){
    return (stack->ctr == -1);
}

Stack* create_stack(){
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->ctr = -1;
    return stack;
}

void push(Stack *stack, int v){
    if (stack->ctr == N-1){
        return;
    }
    stack->ctr++;
    stack->v[stack->ctr] = v;
}

int pop(Stack* stack){
    int v;
    if (empty_stack(stack)){
        exit(1);
    }
    v = stack->v[stack->ctr];
    stack->ctr--;
    return v;
}

void free_stack(Stack *stack){
    free(stack);
}
#include <stdio.h>
#include <stdlib.h>

struct Stack{
    struct Stack* next;
    int value;
};

struct Stack* create_stack();
struct Stack* push(struct Stack *stack, int v);
struct Stack* pop(struct Stack *stack);
int empty_stack(struct Stack *stack);
void free_stack(struct Stack *stack);

struct Stack* create_stack(){
    return NULL;
}

struct Stack* push(struct Stack *stack, int v){ // insert at the top
    struct Stack* item = (struct Stack*)malloc(sizeof(struct Stack));
    if (item == NULL){
        return NULL;
    }
    item->value = v;
    item->next = stack;
    return item;
}

struct Stack* pop(struct Stack* stack){
    if (stack == NULL){
        exit(1);
    }
    struct Stack* item = stack;
    stack = stack->next;
    free(item);
    return stack;
}
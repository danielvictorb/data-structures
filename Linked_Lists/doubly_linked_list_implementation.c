#include <stdio.h>
#include <stdlib.h>

struct Node{
    struct Node* prev;
    int value;
    struct Node* next;
};

struct Node* create_list(){
    return NULL;
}

struct Node* insert_top(struct Node* l, int value){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL){
        return NULL;
    }
    if (l == NULL){
        node->prev = NULL;
        node->value = value;
        node->next = NULL;
        return node;
    }
    node->value = value;
    l->prev = node;
    node->prev = NULL;
    node->next = l;
    return node;
}

struct Node* insert_bottom(struct Node* l, int value){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL){
        return l;
    }
    if (l == NULL){
        node->prev = NULL;
        node->value = value;
        node->next = NULL;
        return node;
    }
    struct Node* aux = l;
    while (aux->next != NULL){
        aux = aux->next;
    }
    aux->next = node;
    node->value = value;
    node->prev = aux;
    node->next = NULL;
    return l;
}

struct Node* remove_top(struct Node* l){
    if (l == NULL){
        return l;
    }
    if (l->next == NULL){
        free(l);
        return NULL;
    }
    l->next->prev = NULL;
    struct Node* aux = l;
    l=l->next;
    free(aux);
    return l;
}

struct Node* remove_bottom(struct Node* l){
    if (l == NULL){
        return l;
    }
    if (l->next == NULL){
        free(l);
        return NULL;
    }
    struct Node* aux = l;
    while (aux->next != NULL){
        aux = aux->next;
    }
    aux->prev->next = NULL;
    free(aux);
    return l;
}

struct Node* remove_value(struct Node* l, int value){
    if (l == NULL){
        return NULL;
    }
    if (l->value == value && l->next == NULL){ // unique value
        free(l);
        return NULL;
    }
    if (l->value == value){ // value in the head
        l->next->prev = NULL;
        free(l);
        return l->next;
    }
    struct Node* aux = l;
    while (aux->value != value && aux->next != NULL){ // loop until find the value
        aux = aux->next;
    }
    if (aux->value != value){ // value not found
        return l;
    }
    if (aux->next == NULL){ // value in the end
        aux->prev->next = NULL;
        free(aux);
        return l;
    } else { // value in the middle
        aux->prev->next = aux->next;
        aux->next->prev = aux->prev;
        free(aux);
        return l;
    }
}
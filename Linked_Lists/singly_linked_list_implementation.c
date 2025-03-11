#include <stdio.h>
#include <stdlib.h>

struct Node{
    int value;
    struct Node* next;
};

struct Node* create_list(){
    return NULL;
}

struct Node* insert_top(struct Node *l, int value){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL){
        return NULL;
    }
    node->value = value;
    node->next = l;
    return node;
}

struct Node* insert_bottom(struct Node *l, int value){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL){
        return NULL;
    }
    if(l == 0){
        node->value = value;
        node->next = NULL;
        return node;
    }
    struct Node* aux;
    aux = l;
    while (aux->next != NULL){
        aux = aux->next;
    }
    node->value = value;
    aux->next = node;
    node->next = NULL;
    return l;
}

struct Node* remove_bottom(struct Node* l){
    if (l==0){
        return NULL;
    }
    struct Node *prev, *aux = l;
    if (aux->next == NULL){
        free(aux);
        return NULL;
    }
    while(aux->next !=0){
        prev = aux;
        aux = aux->next;
    }
    prev->next = NULL;
    free(aux);
    return l;
}

struct Node* remove_top(struct Node* l){
    if (l == NULL){
        return NULL;
    }
    struct Node *aux = l, *prev;
    if (aux->next == NULL){
        free(aux);
        return NULL;
    }
    prev = l;
    aux = aux->next;
    free(prev);
    l = aux;
    return l;
}

struct Node* insert_ordered(struct Node* l, int value){
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    if (node == NULL){
        return NULL;
    }
    node->value = value;  
    
    if (l == NULL){
        node->next = NULL;
        return node;
    }
    
    if (value < l->value){
        node->next = l;
        return node;  
    }
    
    struct Node* aux = l;
    while (aux->next != NULL && aux->next->value < value){
        aux = aux->next;
    }

    node->next = aux->next;
    aux->next = node;
    
    return l;  
}

int main(){
    struct Node* l = create_list();
    l = insert_top(l, 10);
    l = insert_top(l, 15);
    l = insert_bottom(l, 20);
    printf("%d\n%p", l->value, l->next);
    return 0;
}
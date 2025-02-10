#include <stdio.h>

#define N 10

typedef struct {
    int vector[N];
    int control;
} List;

void create_list(List *list);
void clean_list(List *list);
void insert_list(List *list, int n);
void remove_list(List *list);
void show_list(List *list);

void create_list(List *list){
    list->control = -1;  
}

void clean_list(List *list){
    list->control = -1;  
}

void insert_list(List *list, int n){
    if (list->control < N - 1) {  
        list->control++;
        list->vector[list->control] = n;
    } else {
        printf("Lista cheia! Não é possível inserir %d.\n", n);
    }
}

void remove_list(List *list){
    if (list->control >= 0) {  
        list->control--;  
    } else {
        printf("Lista vazia! Não há elementos para remover.\n");
    }
}

void show_list(List *list){
    if (list->control == -1) {
        printf("Lista vazia!\n");
    } else {
        for (int i = 0; i <= list->control; i++){
            printf("%d ", list->vector[i]);
        }
        printf("\n");
    }
}

int main() {
    List myList;
    create_list(&myList);

    insert_list(&myList, 5);
    insert_list(&myList, 10);
    insert_list(&myList, 15);

    printf("Lista após inserções: ");
    show_list(&myList);

    remove_list(&myList);
    printf("Lista após remover o último elemento: ");
    show_list(&myList);

    clean_list(&myList);
    printf("Lista após limpar: ");
    show_list(&myList);

    return 0;
}

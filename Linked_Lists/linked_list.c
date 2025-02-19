#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* create_node(int value);
void insert_after(Node* prev_node, int value);
void print_list(Node* head);
void delete_node(Node** head_ref, int value);

int main() {
    Node* head = create_node(10);

    insert_after(head, 20);
    insert_after(head, 30);
    insert_after(head, 40);

    printf("Initial list: ");
    print_list(head);

    delete_node(&head, 20);

    printf("After deleting 20: ");
    print_list(head);

    Node* current = head;
    while (current != NULL) {
        Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}

Node* create_node(int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_node->data = value;
    new_node->next = NULL;
    return new_node;
}

void insert_after(Node* prev_node, int value) {
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL\n");
        return;
    }
    Node* new_node = create_node(value);
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

void print_list(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void delete_node(Node** head_ref, int value) {
    Node* temp = *head_ref;
    Node* prev = NULL;

    if (temp != NULL && temp->data == value) {
        *head_ref = temp->next; 
        free(temp);             
        return;
    }

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", value);
        return;
    }

    prev->next = temp->next;

    free(temp);  
}
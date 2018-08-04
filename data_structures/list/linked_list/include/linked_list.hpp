#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    struct Node* next;
};

struct Node* create_node(int value);

void push_front(struct Node** current_head, int value);

void insert_after_given_node(struct Node* node, int value);

// Retorna o ponteiro do correspondente valor encontrado, caso contrario retorna NULL
struct Node* find_node_a_with_a_given_data_interactive(struct Node* node, int value);
struct Node* find_node_a_with_a_given_data_recursive(struct Node* node, int value);

struct Node* find_last_node(struct Node* node);

void insert_after_given_data(struct Node* node, int value, int value_to_be_found);

void push_back(struct Node* head, int value);

void print_linked_list_interactive(struct Node* node);
void print_linked_list_recursive(struct Node* node);

int list_size_recursive(struct Node* node, int count);

#endif

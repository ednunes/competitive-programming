#include "../include/linked_list.hpp"
// NULL
#include <cstddef>
// MALLOC
#include <cstdlib>
// COUT
#include <iostream>

using namespace std;

struct Node* create_node(int value)
{
    struct Node* new_last_node = (struct Node*)malloc(sizeof(struct Node*));
    new_last_node->data = value;
    new_last_node->next = NULL;

    return new_last_node;
}

void push_front(struct Node** current_head, int value)
{
    if (current_head == NULL)
    {
        cout << "The current head cannot be NULL" << endl;
        return;
    }
    struct Node* new_head = create_node(value);
    new_head->next = *current_head;
    *current_head = new_head;
}

void insert_after_given_node(struct Node* node, int value)
{
    if (node == NULL)
    {
        cout << "The current head cannot be NULL" << endl;
        return;
    }
    struct Node* new_node = create_node(value);
    new_node->next = node->next;
    node->next = new_node;
}

void insert_after_given_data(struct Node* node, int value, int value_to_be_found)
{
    if (node == NULL)
    {
        cout << "The current head cannot be NULL" << endl;
        return;
    }
    struct Node* current_node = find_node_a_with_a_given_data_interactive(node, value_to_be_found);
    struct Node* new_node = create_node(value);
    new_node->next = current_node->next;
    current_node->next = new_node;
}

void push_back(struct Node* head, int value)
{
    if (head == NULL)
    {
        cout << "The current head cannot be NULL" << endl;
        return;
    }
    struct Node* last_node = find_last_node(head);
    struct Node* new_last_node = create_node(value);
    last_node->next = new_last_node;
}



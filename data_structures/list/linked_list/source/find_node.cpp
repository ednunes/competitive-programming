#include "../include/linked_list.hpp"
// NULL
#include <cstddef>
// MALLOC
#include <cstdlib>

struct Node* find_node_a_with_a_given_data(struct Node* node, int value)
{
    while(node!=NULL && node->data != value)
        node = node->next;
    return node;
}

struct Node* find_last_node(struct Node* node)
{
    struct Node* last_node = (struct Node*) malloc(sizeof(struct Node*));
    while(node!=NULL)
    {
        node = node->next;
        if(node!=NULL) last_node = node;
    }
    return last_node;
}

#include "../include/linked_list.hpp"
#include <iostream>
// NULL
#include <cstddef>

using namespace std;

void print_linked_list_interactive(struct Node* node)
{
    while(node!=NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

void print_linked_list_recursive(struct Node* node)
{
    if(node)
    {
        cout << node->data << " ";
        print_linked_list_recursive(node->next);
    }
    else
    {
        cout << endl;
    }
}
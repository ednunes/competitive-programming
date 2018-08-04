#include "../include/linked_list.hpp"
#include <iostream>
// NULL
#include <cstddef>

using namespace std;

void print_linked_list(struct Node* node)
{
    while(node!=NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}


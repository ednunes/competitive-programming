#include "../include/linked_list.hpp"

// TODO Estudar a respeito do endereço de memoria e acesso com ponteiros e ponteiros duplos

// NULL
#include <cstddef>
// MALLOC
#include <cstdlib>
// COUT
#include <iostream>

using namespace std;

int main()
{
    struct Node* head = (struct Node*)malloc(sizeof(struct Node*));
    head->data = 1;
    head->next = NULL;

    push_front(&head, 2);
    push_front(&head, 3);
    push_front(&head, 4);
    push_front(&head, 5);
    
    insert_after_given_node(head,6);
    
    insert_after_given_data(head, 7, 1);
    insert_after_given_data(head, 8, 7);
    
    push_back(head, 9);
    
    print_linked_list(head);

    int value = 7;
    struct Node* find = find_node_a_with_a_given_data(head, value);
    if(find) cout << "Found the value:  " << find->data << endl;
    else cout << "The list has not the value: " << value << endl;

    struct Node* last = find_last_node(head);
    if(last) cout << "Found the value:  " << last->data << endl;
    else cout << "Empty list" << endl;
    
    return 0;
}

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
    head->data = 5;
    head->next = NULL;

    push_front(&head, 4);
    push_front(&head, 1);

    insert_after_given_node(head,3);
    
    insert_after_given_data(head, 2, 1);
        
    push_back(head, 6);
    
    cout << "Print interactive" << endl;
    print_linked_list_interactive(head);

    cout << "Print recursive" << endl;
    print_linked_list_recursive(head);

    int value = 3;
    struct Node* find = find_node_a_with_a_given_data_interactive(head, value);
    if(find) cout << "Found the value: " << find->data << endl;
    else cout << "The list has not the value: " << value << endl;

    value = 4;
    find = find_node_a_with_a_given_data_recursive(head, value);
    if(find) cout << "Found the value: " << find->data << endl;
    else cout << "The list has not the value: " << value << endl;

    struct Node* last = find_last_node(head);
    if(last) cout << "The last node is: " << last->data << endl;
    else cout << "Empty list" << endl;
    
    
    cout << "The list size is: " << list_size_recursive(head,0) << endl;    

    return 0;
}

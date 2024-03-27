#include "linkedlist.h"
#include <iostream>
using namespace std;

void insert_head(Node *&head, int num) {
    Node *new_node = new Node;
    new_node->data = num;
    new_node->next = head;
    head = new_node;
}

void insert_after(Node *&prev, int num) {
    Node *new_node = new Node;
    new_node->data = num;
    new_node->next = prev->next;
    prev->next = new_node;
}

void insert_sorted(Node *&head, int num) {
    // handle the special case of empty list
    if (!head) {
        head = new Node;
        head->data = num;
        head->next = NULL;
        return;
    }

    // special case: new head
    if (head->data > num) {
        insert_head(head, num);
        return;
    }   

    // otherwise, traverse the list and find the right spot
    Node *current = head;
    while (current->next && current->next->data < num) {
        current = current->next;
    }
    insert_after(current, num);
}

void remove(Node *&head, int num) {
    // special case: empty list
    if (!head)
        return;
    
    Node *prev = NULL;
    Node *current = head;
// Find the node to delete
    while (current && current->data != num) {
        prev = current;
        current = current->next;
    }

    // special case: value not found
    if (!current)
        return;
    
    // special case: delete the head
    if (!prev)
        head = current->next;
    else
        prev->next = current->next; // Disconnect the node
    delete current; // Free the memory
}


void print_list(Node *head) {    
    Node *current = head;
    while (current) {
        cout << current->data;
        if (current->next)
            cout << ", ";
        current = current->next;
    }

    cout << endl;
}

int len(Node *head) {
    if (head == NULL)
        return 0;
    else
        return 1 + len(head->next);
}

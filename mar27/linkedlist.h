#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node *next;
};

void remove(Node *&head, int num);

void insert_sorted(Node *&head, int num);

void print_list(Node *head);

int len(Node *head);

#endif // LINKEDLIST_H

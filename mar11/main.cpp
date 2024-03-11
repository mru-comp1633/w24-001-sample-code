#include <iostream>
#include <string>

using namespace std;
// Not used, but data member could be a struct
struct Person {
    string name;
    string title;
    int age;
    Person *spouse;
};

struct Node {
    int data;
    Node *next;
};

void insert_after(Node *prev, int num) {
    // handle the special case of empty list
    if (!prev) {
        prev = new Node;
        prev->data = num;
        prev->next = NULL;
        return;
    }

    Node *new_node = new Node;
    new_node->data = num;
    new_node->next = prev->next;
    prev->next = new_node;
}

int main() {  
    // start with the head of 7
    Node *head = NULL; // can be all in one line

    // TODO: Segfault, needs debugging
//    insert_after(head, 7);

    // manually add the head
    head = new Node;
    head->data = 7;
    head->next = NULL;
    

    // add a 10
    head->next = new Node;
    head->next->data = 10;
    head->next->next = NULL;

    // add a 1 to the head of the list
    Node *temp = new Node;
    temp->data = 1;
    temp->next = head;
    head = temp;

//    delete temp; // bad, don't free the head!
    // can reassign temp to NULL to indicate no longer in use
    temp = NULL;

    // insert a 5 between 1 and 7
    insert_after(head, 5);
    insert_after(head->next, 6);

    // print out the list
    Node *current = head;
    while (current) {
//        current = current->next;
        cout << current->data << ", ";
        current = current->next;
    }

    cout << endl;
    
    return 0;
}

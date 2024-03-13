#include "linkedlist.h"
#include <iostream>
#include <string>

using namespace std;

int main() {  
    // start with the head of 7
    Node *head = NULL; // can be all in one line
    insert_sorted(head, 5);
    insert_sorted(head, 3);
    insert_sorted(head, 7);
    insert_sorted(head, 6);

    remove(head, 7);
    remove(head, 3);
    remove(head, 6);
    remove(head, 5);

    print_list(head);

    cout << "The list length is " << len(head) << endl;
    
    return 0;
}

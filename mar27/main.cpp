#include "recursion.h"
#include "linkedlist.h"
#include <iostream>

using namespace std;

int main() {
//    f(); // infinite recursion
    int n;
/*    cout << "What number factorial? ";
    cin >> n;
    cout << n << "! is " << factorial(n) << endl;

    cout << "How many disks are you playing with? ";
    cin >> n;
    hanoi(n, 1, 3, 2);
*/
    Node *head = NULL;
    insert_sorted(head, 1);
    insert_sorted(head, 2);
    insert_sorted(head, 3);

    cout << "The length is " << len(head) << endl;

    int arr[] = {1, 2, 3, 4};
    cout << in_array(arr, 4, 3) << endl;
    cout << in_array(arr, 4, -1) << endl;
    
    return 0;
}

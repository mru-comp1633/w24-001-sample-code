#include "recursion.h"
#include <iostream>

using namespace std;

void hanoi(int n, int src, int dest, int spare) {
    // base case: move the disk
    if (n == 1) {
        cout << "Move disk from " << src << " to " << dest << endl;
    } else {
        // recursive case
        // move the disks on top to the spare peg
        hanoi(n-1, src, spare, dest);
        // move the bottom disk to the destination
        hanoi(1, src, dest, spare);
        // move the rest of the disks from the spare to
        // the destination
        hanoi(n-1, spare, dest, src);
    }
}

bool in_array(int *arr, int size, int value) {
    // needs more testing
    if (size == 0)
        return false;
    if (size == 1)
        return (arr[0] == value);

    int mid = size / 2;
    if (arr[mid] == value)
        return true;

    if (arr[mid] > value)
        // first half
        return in_array(arr, mid, value);
    else
        return in_array(arr + mid + 1, size - mid, value);
}

int factorial(int n) {
    int return_val = 1;
    if (n != 0)
        return_val = n * factorial(n-1);
    return return_val;
}

void f() {
    f();
}

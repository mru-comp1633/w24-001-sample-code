#include "utils.h"
#include <iostream>
using namespace std;

// private helper function
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int arr[], const int size) {
    int smallest = 0;
    for (int start = 0; start < size; ++start) {
        for (int i = start + 1; i < size; ++i) {
            if (arr[i] < arr[smallest]) {
                smallest = i;
            }
        }
        swap(arr[smallest], arr[start]);
    }       
}

void print(const int arr[], const int size) {
    for (int i = 0; i < size; ++i)
        cout << arr[i] << ' ';
    cout << endl;
}

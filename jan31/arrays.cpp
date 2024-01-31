#include "arrays.h"
#include <iostream>
using namespace std;

/*
// private helper function
void uninitialized() {
    int x;
    cout << "The value of x is: " << x << endl;
}

// this does not work!
// Also a private function
void print_size(double nums[]) {
    cout << "Size of nums: " << sizeof(nums) / sizeof(double) << endl;
}
*/

void create_array() {
//    uninitialized();
    const int N = 10;
    int numbers[N] = {10};
    
    cout << "First in array: " << numbers[0] << endl;
    cout << "Second in array: " << numbers[1] << endl;
}

void size_demo() {
    double nums[] = {1.5, 2.5, 0, 3};
    cout << "Size of nums: " << sizeof(nums) / sizeof(double) << endl;
//    print_size(nums); 
}

void index_array(int i) {
    int nums[] = {1, 2, 3, 4, 5};
    cout << "nums[]: " << nums << endl;
    
    nums[0] = 40;
    // position 5 doesn't belong to array
    nums[5] = 6;
    
    cout << "nums[" << i << "]: " << nums[i] << endl;
//    int more_nums[10] = {};
//    cout << "nums[" << i << "]: " << nums[i] << endl;
    
}

void duplicate_arrays() {
    const int SIZE = 4;
    char abcd[SIZE] = {'a','b','c','d'};
    char copy[SIZE];

    for (int i = 0; i < SIZE; ++i)
        copy[i] = abcd[i];

    bool equal = true;
    for (int i = 0; i < SIZE; ++i) {
        if (copy[i] != abcd[i])
            equal = false;
    }
    
    if (equal)
        cout << "They're equal!\n";
    else
        cout << "Not equal!\n";
}

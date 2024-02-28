#include "pointers.h"
#include <iostream>
#include <cstring>
using namespace std;

void const_demo() {
    
    int y = 37;
    int x;
    const int *pci = &y;
    cout << "*pci: " << *pci << endl;

    y = 38;
    cout << "*pci: " << *pci << endl;

    // can't do this, *pci is const
//    *pci = 37;
//    cout << "*pci: " << *pci << endl;

    pci = &x;
    x = 5;
    cout << "*pci: " << *pci << endl;

    int * const cpi = &x;
    *cpi = 32;
    cout << "x: " << x << endl;
    // can't reassign a const pointer
//    cpi = &y;
}

void array_is_pointer(char *word) {
    strcpy(word, "I'm a pointer!");
}

void pointer_array_demo() {
    
    char A[32];
    char *A_ref = A;
    
    cout << A << endl;
    array_is_pointer(A_ref);
    cout << A << endl;
    *A_ref = 'J';
    cout << A << endl;
    *(A_ref + 1) = 'a';
    cout << A << endl;
    *(A_ref + 5) = '%';
    cout << A << endl;
}

void value_vs_address() {   
    char c = 'a';
    char *p = &c;
    cout << "value of p: " << p << endl;
    cout << "Address of p: " << &p << endl;
}

void foo(int *&iptr) {
    int x = 42;
    iptr = &x;
}

#include "pointers.h"
#include <iostream>
using namespace std;

void basic_examples() {
    int x = 42;
    int j;
    int *p = &x;
    cout << "&x: " << &x << endl;
    cout << "p: " << p << endl;

    // dereference p
    cout << "*p: " << *p << endl;
    *p = 7;
    cout << "x: " << x << endl;

//    p = NULL; // causes segfault
    *p = 7;

    cout << "*p: " << *p << endl;

    // symbol soup
    cout << "*&x: " << *&x << endl;
}

void pointer_plus_plus() {
    int x = 0;
    int y = 5;
    int *p_x = &x;

    cout << "x: " << x << endl;
    cout << "p_x: " << p_x << endl;
    cout << "y: " << y << endl;
//    *p_x++;
    (*p_x)++;
    
    cout << "x: " << x << endl;
    cout << "p_x: " << p_x << endl;
    cout << "y: " << y << endl;
}

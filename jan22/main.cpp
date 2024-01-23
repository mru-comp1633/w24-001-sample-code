#include <cmath>
#include <iostream>

#include "by_ref.h"

using namespace std;

void test();

int main() {
    // illustration of block level scope
    {
        int x = 0;
        cout << x << endl;
    }

    int y = 0;
    by_value(y + 5);
    cout << "Incrementing by value: " << y << endl;

    by_ref(y);
    cout << "Incrementing by reference: " << y << endl;

    // call test driver
//    test();

    int a, b, c, d;
    cout << "Enter 4 integers: ";
    cin >> a >> b >> c >> d;
    cout << "You entered: " << a << b << c << d << endl;
    
    return 0;
}

void test() {
    // test the swap function thoroughly
    int x = 5;
    int y = 8;
    cout << "Before swap: \n";
    cout << "x: " << x << ", y: " << y << endl;

    swap(x, y);
    cout << "After swap: \n";
    cout << "x: " << x << ", y: " << y << endl;
}

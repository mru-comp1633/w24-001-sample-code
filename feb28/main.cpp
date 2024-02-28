#include <iostream>
#include "pointers.h"

using namespace std;

int main() {
    //const_demo();
    //pointer_array_demo();
    //value_vs_address();
    int *iptr = NULL;
    foo(iptr);
    cout << "iptr: " << iptr << endl;
    cout << "*iptr: " << *iptr << endl;
    
    return 0;
}

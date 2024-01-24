#include <cmath>
#include <iostream>

#include "decisions.h"

using namespace std;

int main() {
/*
    cout << "false: " << false << endl;
    cout << "false * 5: " << false * 5 << endl;
    bool some_bool = 5;
    cout << "some_bool: " << some_bool << endl;
    cout << "You entered: " << some_bool << endl;
*/

    // tricky mistake #1: semicolon after condition
    if (true); {
        cout << "inside my true statement\n";
    }
    
    return 0;
}

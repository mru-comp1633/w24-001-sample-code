#include "time.h"
#include <iostream>

using namespace std;

int main() {
    Time now(10, 33, 0);
    cout << now << endl;
    
    Time later;
    later.set(5, 30, 0);
    
    cout << later << endl;

    return 0;
}

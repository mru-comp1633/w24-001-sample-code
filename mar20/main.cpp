#include "time.h"
#include <iostream>

using namespace std;

int main() {
    Time now(10, 33, 0);

    now.write(cout);
    cout << endl;
    
    Time later;
    later.set(5, 30, 0);
    
    now.write(cout);
    cout << endl;

    cout << (now == later) << endl;
    cout << (later == now) << endl;

    Time *dynamic = new Time;
    delete dynamic;
    
//    cout << now << endl;
    return 0;
}

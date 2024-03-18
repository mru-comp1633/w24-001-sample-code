#include "time.h"
#include <iostream>

using namespace std;

int main() {
    Time t;
    t.set(5, 0, 0);
    t.write(cout);
    cout << endl;

    Time *later = new Time;
    later->set(10, 30, 0);

    cout << "Later: ";
    later->write(cout);
    cout << endl;

    cout << "t.compare(later): " << t.compare(*later) << endl;
    
    cout << "t.compare(t): " << t.compare(t) << endl;
    

    cout << "Time object at address: " << &t << endl;
    cout << "Allocated size: " << sizeof(t) << " bytes\n";

    delete later; // every new needs a delete
    
    return 0;
}

#include "time.h"
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    Time t;

    char fname[64];
    cout << "Please enter a filename to read: ";
    cin >> fname;

    ifstream input(fname); // opened for reading
    ofstream output("out.txt");

    if (input) {
        read_time(t, input);
        write_time(t, output);
        output << endl;

        input.close();
    } else {
        cout << fname << " can't be opened! \n";
    }

    output.close();
    
    return 0;
}

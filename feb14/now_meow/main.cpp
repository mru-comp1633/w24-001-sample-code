#include "now_meow.h"
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    // cout << "Enter a sentence to replace now with meow: ";
    // copy_and_meow(cin, cout);

    // return 0; // for testing purposes

    if (argc < 3) {
        cout << "Usage: " << argv[0] << " inputfile outputfile\n";
        return 1;
    }

    ifstream input(argv[1]);
    ofstream output(argv[2]);

    // check that they opened appropriately
    if (!input) {
        cout << argv[1] << " could not be opened for reading\n";
        return 1;
    }

    if (!output) {
        cout << argv[2] << " could not be opened for writing\n";
        return 1;
    }

    copy_and_meow(input, output);

    input.close();
    output.close();
    
    return 0;
}

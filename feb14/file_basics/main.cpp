#include "time.h"
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "Usage: " << argv[0] << " inputfile outputfile\n";
        return 1;
    }
    
    
    // for (int i = 0; i < argc; i++ ) {
    // //     cout << argv[i] << endl;
    // // }

    // // return 0; // stop the program
    
    Time t;

    ifstream input(argv[1]); // opened for reading
    ofstream output(argv[2]);

    if (!output) {
        cout << "You can't write to " << argv[2] << endl;
        return 1;
    }

    if (input) {
        read_time(t, input);
        write_time(t, output);
        output << endl;

        input.close();
    } else {
        cout << argv[1] << " can't be opened! \n";
    }

    output.close();
    
    return 0;
}

#include <iostream>
#include <cstring>
#include "cstrings.h"

using namespace std;

int main() {

    char name2[4];
    strcpy(name2, "Charlotte Curtis");

// array initialization
    char vowels[] = {'a', 'e', 'i', 'o', 'u', '\0', 'q', 'r', 's'};
    cout << vowels << endl;

    char a_ch = 'a';
    char a_str[] = "a";
    char greeting[32] = "Hello!";
//    greeting = "Goodbye!"; // cannot re-initialize
    greeting[0] = 'G';
    greeting[1] = 'o'; // etc
//    char hello[6] = "Hello!"; compiler error

    cout << "greeting: " << greeting << endl;

    // Input stuff
    char name[32];
    cout << "Enter your name: ";
    // cin >> name; // only reads up to first whitespace
    cin.getline(name, 32);

    cout << "You entered: " << name << endl;

    // call the length function
    cout << "Your name has " << len(name) << " characters!\n";


    cout << "Name2: " << name2 << endl;

    // fancy hello
    complicated_hello();
    
    return 0;
}

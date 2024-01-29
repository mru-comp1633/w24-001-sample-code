#include "loops.h"
#include <iostream>
using namespace std;

void fizzbuzz() {
    int x = 1;              // Initialization
    while (x <= 100) {      // Condition
        cout << x << ": ";
        if (x % 3 == 0)
            cout << "Fizz";
        if (x % 5 == 0)
            cout << "Buzz";
        cout << "\n";
        x++;                // Update
    }
}

void fizzbuzz_for() {
    for (int x = 1; x <= 100; x++) {
        cout << x << ": ";
        if (x % 3 == 0)
            cout << "Fizz";
        if (x % 5 == 0)
            cout << "Buzz";
        cout << "\n";
    }
}

int count_vowels() {
    cout << "Enter a sentence terminated by .: ";
    char c;
    char sentinel = '.';
    int n_vowels = 0;

    cout << "value of c is: " << c << endl;
    // priming read
    cin >> c;
    while (c != sentinel) {
        
        if (c == 'a'
            || c == 'e'
            || c == 'i'
            || c == 'o'
            || c == 'u')
            n_vowels++;
        // internal read
        cin >> c;
    }
    return n_vowels;
}


int count_vowels_eof() {
    cout << "Enter a sentence: ";
    char c;
    int n_vowels = 0;

    while (cin >> c) {
        if (c == 'a'
            || c == 'e'
            || c == 'i'
            || c == 'o'
            || c == 'u')
            n_vowels++;
      }
    return n_vowels;
}

void print_times(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << i * j << ' ';
        }
        cout << endl;
    }
}

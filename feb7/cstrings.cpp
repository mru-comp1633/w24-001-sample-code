#include "cstrings.h"
#include <cstring>
#include <iostream>
using namespace std;

int len(const char str[]) {
    int length = 0;
    while (str[length] != '\0')
        ++length;
    return length;
}

void complicated_hello() {
    char hello[] = "Hello";
    char world[] = "World";

    char message[32];
    strcpy(message, hello);
    strcat(message, " "); 
    strcat(message, world);
    strcat(message, "!");

    cout << message << endl;
}

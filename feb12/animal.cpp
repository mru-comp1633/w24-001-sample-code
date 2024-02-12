#include "animal.h"
#include <iostream>
using namespace std;

void read(Animal &a) {
//    cin >> a.species; // assumes single word
    cin >> ws; // consume leading whitespace in buffer
    cin.getline(a.species, BUFSIZE);
    cin.getline(a.name, BUFSIZE);
    cin.getline(a.colour, BUFSIZE);
    cin >> a.age;
    cin >> a.weight_kg;
}

void print(const Animal &a) {
    cout << "Your " << a.species
         << " is named " << a.name << endl;
    cout << "It weighs " << a.weight_kg
         << "kg and is " << a.age << " years old\n";
}

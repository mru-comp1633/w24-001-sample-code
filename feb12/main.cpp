#include <iostream>
#include <cstring>
#include "animal.h"

using namespace std;

int main() {
    Animal dog = {"dog", "Spot", "brown", 0.4, 3};
    // strcpy(dog.species, "dog");
    // strcpy(dog.name, "Spot");
    // strcpy(dog.colour, "brown");
    // dog.age = 0.4;
    // dog.weight_kg = 3;

    print(dog);

    Animal other_dog = dog;
    strcpy(other_dog.name, "Fido");
    print(other_dog);
    print(dog);

    // read in a cat
    Animal cat;
    cout << "Please enter your animal's info: ";
    read(cat);
    print(cat);

    // read in a snake
    Animal snake;
    read(snake);
    print(snake);
    
    return 0;
}

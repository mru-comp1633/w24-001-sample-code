#ifndef ANIMAL_H
#define ANIMAL_H

const int BUFSIZE = 32;

// Define a structure representing an animal
struct Animal {
    char species[BUFSIZE];
    char name[BUFSIZE];
    char colour[BUFSIZE];
    double age;
    double weight_kg;
};

// Do stuff with it
// Animal read(); alternative version that creates a copy
void read(Animal &a);
void print(const Animal &a);
    
#endif // ANIMAL_H

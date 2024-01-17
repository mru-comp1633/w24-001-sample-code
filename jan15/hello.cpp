#include <iostream>
using namespace std;

int main() {
  const int NUM_PLANETS = 8;

  // We need to know the number of planets to
  // accurately plan our space program.
  cout << "NUM_PLANETS: " << NUM_PLANETS << endl;
  cout << "This is breaking over multiple "
       << "lines. But the output is a single line\n";

  int age;
  cout << "Enter your age: ";
  cin >> age;

  cout << "You're " << age << " years old?? wow.\n";

  double height;
  cout << "Enter your height in inches: ";
  cin >> height;

  cout << "and " << height << " inches tall!\n";

  return 0;
}

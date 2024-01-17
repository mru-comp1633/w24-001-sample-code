#include <cmath>
#include <iostream>

#include "functions.h"

using namespace std;

int main() {
  double a, b;
  cout << "Enter the two side lengths of a right angle triangle: ";
  cin >> a >> b;
  cout << "The hypotenuse length is " << hypoteneuse(a, b) << endl;
  return 0;
}

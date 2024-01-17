#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

double sum_of_squares(double a, double b);
void display_stuff(double stuff);

int main() {
  cout << "The square root of 4 is " << sqrt(4) << endl;

  double x = 2;
  double y = 3;

  cout << setw(10) << pow(x, y) << endl;
  cout << sqrt(5) << endl;

  cout << "sum of squares: " << sum_of_squares(x, y) << endl;

  display_stuff(sum_of_squares(2, 5));
  cout << endl;

  return 0;
}

double sum_of_squares(double a, double b) { return a * a + b * b; }

void display_stuff(double stuff) {
  cout.precision(2);
  cout << fixed;
  cout << stuff;
}

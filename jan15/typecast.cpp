#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int i = 3;
  double d = 4.5;

  // Truncate off the 0.5
  i = static_cast<int>(d);

  cout << d << endl;
  cout << i << endl;

  cout << (0.1 * 3 == 0.3) << endl;

  int max_int = 2147483647;

  cout << max_int << endl;
  ++max_int;
  cout << max_int << endl;

  return 0;
}

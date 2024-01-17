#include <iostream>
using namespace std;

int main() {
  char first_initial, last_initial;
  int year, age;
  cout << "Enter your first and last initials: ";
  cin >> first_initial >> last_initial;

  cout << "Enter your program year and current age: ";
  cin >> year >> age;

  cout << "Thanks, " << first_initial << last_initial << "! You were "
       << (age - year) << " when you started!\n";

  return 0;
}

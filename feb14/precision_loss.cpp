#include <iostream>
using namespace std;

int main() {
    // Small demo to show loss of precision with repeatedly adding doubles
    double steps;
    cout << "How many steps would you like to accumulate? ";
    cin >> steps;

    // we'll range from 0 to 1
    double delta = 1 / (steps - 1);

    double accum = 0;
    for (int i = 0; i < steps; ++i)
        accum += delta;

    double multiply = steps * delta;

    cout << "The difference between multiplying and accumulating is: "
         << multiply - accum << endl;
    return 0;
}

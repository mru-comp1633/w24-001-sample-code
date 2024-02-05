#include <iostream>
using namespace std;

double sum_10_elements(const double arr[10]) {
    double sum = 0;
    for (int i = 0; i < 10; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
        sum += arr[i];
    }
    return sum;
}


double sum_all(const double arr[], const int &size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// demonstrating passing by reference
void add_one(double arr[], const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
}

//void get_temps(double [] high_temps, const int forecast_days);

// Can't have array as return typey
// double[] get_temps() {
//     const int FORECAST_DAYS = 7;
//     double high_temps[FORECAST_DAYS] = {};
//     for (int i = 0; i < FORECAST_DAYS; i++) {
//         cout << "Enter high temp for day " 
//              << i + 1 << ": ";
//         cin >> high_temps[i];
//     }
//     return high_temps;
// }

int main() {
    double arr5[] = {1, 1, 1, 1, 1};
    double arr2[] = {10, 10};
    cout << "The sum is : " << sum_10_elements(arr2) << endl;
    cout << "The sum is : " << sum_all(arr2, 2) << endl;

    add_one(arr5, 5);
    cout << "arr5[0] = " << arr5[0] << endl;

//    double temperatures[] = get_temps();

    int arr[5];
    cout << "arr: " << arr << endl;
    
    cout << "arr[0]: " << arr[0] << endl;
    
    return 0;
}

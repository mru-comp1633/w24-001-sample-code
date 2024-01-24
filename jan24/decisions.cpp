#include "decisions.h"
#include <iostream>
using namespace std;

bool timed_out(int total_time, int num_records) {
    const int THRESHOLD = 1;
    double time_per_record = static_cast<double>(total_time) / num_records;
    return time_per_record > THRESHOLD;
}

void test_timed_out() {
    // simple tests
    bool did_time_out = timed_out(10, 5);
    cout << "timed_out(10, 5): " << did_time_out << endl;
    did_time_out = timed_out(10, 20);
    cout << "timed_out(10, 20): " << did_time_out << endl;

    did_time_out = timed_out(10, 0);
    cout << "timed_out(10, 0): " << did_time_out << endl;
}

bool read_user_input() {    
    cout << "Is this true? (y/n):";
    char user_input;
    cin >> user_input;
    return user_input == 'y' || user_input == 'Y';
}


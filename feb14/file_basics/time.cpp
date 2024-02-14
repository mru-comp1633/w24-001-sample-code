#include "time.h"

#include <iomanip>
#include <iostream>

using namespace std;

void read_time(Time &t, istream &in) {
    char colon;
    in >> t.hrs >> colon >> t.mins;
}

void write_time(const Time &t, ostream &out) {
    out.fill('0');
    out << t.hrs << ':' << setw(2) << t.mins;
}

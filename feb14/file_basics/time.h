#ifndef TIME_H
#define TIME_H

#include <iostream>

struct Time {
    int hrs;
    int mins;
};

void read_time(Time &t, std::istream &in);
void write_time(const Time &t, std::ostream &out);

#endif // TIME_H

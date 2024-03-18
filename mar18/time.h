#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time {
public:
    void write(std::ostream &out);
    void set(int h, int m, int s);
    // return 0 if equal, -1 if other is later
    // +1 if other is earlier
    int compare(Time other);
    void increment();
private:
    int hours;
    int minutes;
    int seconds;
};

#endif // TIME_H

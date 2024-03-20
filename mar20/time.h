#ifndef TIME_H
#define TIME_H

#include <iostream>

class Time {
public:
    Time();
    Time(int h, int m, int s);
    ~Time();
    
    void write(std::ostream &out) const;
    void set(int h, int m, int s);
    // return 0 if equal, -1 if other is later
    // +1 if other is earlier
    int compare(const Time &other) const;
    void increment();

    bool operator==(const Time &other) const;
private:
    int hours;
    int minutes;
    int seconds;
    int *extra;
};

#endif // TIME_H

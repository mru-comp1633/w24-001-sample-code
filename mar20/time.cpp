#include "time.h"

#include <iostream>

Time::Time() : hours(0), minutes(0), seconds(0) {
    std::cout << "I'm allocating stuff!\n";
    extra = new int;    
}

Time::Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {
    std::cout << "I'm being constructed with some values!\n";
    extra = new int;
}

Time::~Time() {
    // clean up anything dynamic
    delete extra;
}


bool Time::operator==(const Time &other) const {
    return (hours == other.hours &&
           minutes == other.minutes &&
           seconds == other.seconds);
}

void Time::set(int h, int m, int s) {
    // would actually check for % 60 etc
//    int hours = 7; // better not to have local with same name
    this->hours = h;
    minutes = m;
    seconds = s;
}

void Time::write(std::ostream &out) const {
    out << hours << ':' << minutes << ':' << seconds;
//    set(1, 2, 3);
//    hours = -1; // no can do, is const
}

int Time::compare(const Time &other) const {
    // just do equality for now
   return !(hours == other.hours &&
           minutes == other.minutes &&
           seconds == other.seconds);
}
    

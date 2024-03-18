#include "time.h"

void Time::set(int h, int m, int s) {
    // would actually check for % 60 etc
//    int hours = 7; // better not to have local with same name
    this->hours = h;
    minutes = m;
    seconds = s;
}

void Time::write(std::ostream &out) {
    out << hours << ':' << minutes << ':' << seconds;
}

int Time::compare(Time other) {
    // just do equality for now
   return !(hours == other.hours &&
           minutes == other.minutes &&
           seconds == other.seconds);
}
    

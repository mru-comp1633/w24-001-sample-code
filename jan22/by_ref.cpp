#include "by_ref.h"

void by_value(int x) {
    ++x;
}

void by_ref(int& x) {
    ++x;
}

void swap(int& a, int& b) {
    int old_a = a;
    a = b;
    b = old_a;
}

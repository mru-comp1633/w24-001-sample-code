#ifndef BY_REF_H
#define BY_REF_H

void by_value(int x);
void by_ref(int& x);

// prototype for moving a point
void move_point(double& x, double& y, double angle, double distance);

void swap(int& a, int& b);

#endif // BY_REF_H

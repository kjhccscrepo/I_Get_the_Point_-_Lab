#ifndef POINT_H
#define POINT_H
#include <string>
#include <cmath>
#include <ostream>
class cartesian_2d_point {
    private:
    double myX;
    double myY;
    public:
    double getX() const;
    double getY() const;
    explicit cartesian_2d_point(const int &x, const int &y);
    explicit cartesian_2d_point(const float &x, const float &y);
    explicit cartesian_2d_point(const double &x, const double  &y);
    double operator-(const cartesian_2d_point &thing_2) const;
    int operator==(const cartesian_2d_point &thing_2) const;
    int operator!=(const cartesian_2d_point &thing_2) const;
    cartesian_2d_point operator/(const cartesian_2d_point &thing_2) const;
    friend std::ostream& operator<<(std::ostream &os, const cartesian_2d_point &myPoint);
    cartesian_2d_point operator*(const double &k) const;
};
std::ostream& operator<<(std::ostream &os, const cartesian_2d_point &myPoint);
#endif

#include "point.hpp"
double cartesian_2d_point::getX() const {
    return myX;
}
double cartesian_2d_point::getY() const {
    return myY;
}
cartesian_2d_point::cartesian_2d_point(const int &x, const int &y) {
    myX = x;
    myY = y;
}
cartesian_2d_point::cartesian_2d_point(const float &x, const float &y) {
    myX = x;
    myY = y;
}
cartesian_2d_point::cartesian_2d_point(const double &x, const double &y) {
    myX = x;
    myY = y;
}
double cartesian_2d_point::operator-(const cartesian_2d_point &thing_2) const {
    const double result = sqrt(pow(thing_2.getX() - this->getX(), 2) + pow(thing_2.getY() - this->getY(), 2));
    return result;
}
int cartesian_2d_point::operator==(const cartesian_2d_point &thing_2) const {
    if (this->getX() == thing_2.getX() && this->getY() == thing_2.getY()) {
        return 1;
    }
    return 0;
}
int cartesian_2d_point::operator!=(const cartesian_2d_point &thing_2) const {
    if (this->getX() == thing_2.getX() && this->getY() == thing_2.getY()) {
        return 0;
    }
    return 1;
}
cartesian_2d_point cartesian_2d_point::operator/(const cartesian_2d_point &thing_2) const {
    const double newX = (this->getX() + thing_2.getX()) / 2;
    const double newY = (this->getY() + thing_2.getY()) / 2;
    const cartesian_2d_point result = cartesian_2d_point(newX, newY);
    return result;
}
cartesian_2d_point cartesian_2d_point::operator*(const double &k) const {
    const double newX = this->getX() * k;
    const double newY = this->getY() * k;
    const cartesian_2d_point result = cartesian_2d_point(newX, newY);
    return result;
}
std::ostream& operator<<(std::ostream &os, const cartesian_2d_point &myPoint) {
    os << "(" << myPoint.getX() << ", " << myPoint.getY() << ")";
    return os;
}
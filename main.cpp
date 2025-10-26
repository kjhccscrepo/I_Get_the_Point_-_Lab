#include <iostream>
#include "src/point.hpp"
int main() {
    const cartesian_2d_point p1 = cartesian_2d_point(3.2, 9.8);
    const cartesian_2d_point p2 = cartesian_2d_point(5.5, -1.2);
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    std::cout << p1 - p2 << std::endl;
    std::cout << (p1 == p2) << std::endl;
    std::cout << (p1 != p2) << std::endl;
    std::cout << p1 / p2 << std::endl;
    std::cout << (p1 * 7) << std::endl;
}

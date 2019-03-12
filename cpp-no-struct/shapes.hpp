#ifndef SHAPES_HPP
#define SHAPES_HPP

#include <cmath>

namespace geometry
{

double squareArea(double side)
{
    return side * side;
}

double rectangleArea(double width, double height)
{
    return width * height;
}

double triangleArea(double a, double b, double c)
{
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

double circleArea(double radius)
{
    return radius * radius * M_PI;
}

bool circleContains(double centerX, double centerY, double radius, double testX, double testY)
{
    double dx = centerX - testX;
    double dy = centerY - testY;
    return dx * dx + dy * dy <= radius * radius;
}

bool squareContains(double upleftX, double upleftY, double length, double testX, double testY)
{
    return testX >= upleftX &&
           testX <= upleftX + length &&
           testY >= upleftY &&
           testY <= upleftY + length;
}

bool rectangleContains(double upleftX, double upleftY, double downRightX, double downRightY,
                       double testX, double testY)
{
    return testX >= upleftX &&
           testX <= downRightX &&
           testY >= upleftY &&
           testY <= downRightY;
}

} // namespace geometry

#endif
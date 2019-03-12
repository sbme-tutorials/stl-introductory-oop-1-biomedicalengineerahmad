#ifndef SHAPES_HPP
#define SHAPES_HPP

#include <cmath>

namespace geometry
{

double euclideanDistance( double x1, double y1, double x2, double y2 )
{
    double dx = x1 - x2;
    double dy = y1 - y2;
    return std::sqrt( dx * dx + dy * dy );
}

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

struct Point
{
    double x;
    double y;
};

struct Circle
{
    Point center;
    double radius;
};

struct Square
{
    Point upLeftCorner;
    double length;
};

struct Rectangle
{
    Point upLeftCorner;
    Point downRightCorner;
};

double euclideanDistance( Point p1, Point p2 )
{
    return euclideanDistance( p1.x, p1.y, p2.x, p2.y );
}

bool circleContains(Circle c, Point test)
{
    // Implement yourself.
    // DRY solution?!
}

bool squareContains(Square s, Point test)
{
    // Implement yourself.
    // DRY solution?!
}

bool rectangleContains(Rectangle r, Point test)
{
    // Implement yourself.
    // DRY solution?!
}

} // namespace geometry

#endif
#include <iostream>
#include <cmath>

double euclideanDistance( double x1, double y1, double x2, double y2 )
{
    double dx = x1 - x2;
    double dy = y1 - y2;
    return std::sqrt( dx * dx + dy * dy );
}

int main()
{
    double px = 0;
    double py = 0;
    double qx = 0;
    double qy = 0;

    std::cout << "Enter the two points coordinates as following: x1 y1 x2 y2 [ENTER]\n";
    std::cin >> px >> py >> qx >> qy;
    std::cout << euclideanDistance( px , py, qx , qy);
}

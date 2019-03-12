#include <iostream>
#include <string> // for std::string
#include "shapes.hpp"

int main( int argc, char **argv )
{
    std::string shape = argv[1]; // this will copy the contents pointed by `argv[1]`
    double area = 0;
    
    if( shape == "circle" )
    {
        double radius = std::atof( argv[2] );
        area = geometry::circleArea( radius );
    }
    else if( shape == "square" )
    {
        double length = std::atof( argv[2] );
        area = geometry::squareArea( length );
    }
    else if( shape == "rectangle" )
    {
        double width = std::atof( argv[2] );
        double height = std::atof( argv[3] );
        area = geometry::rectangleArea( width , height );
    }
    else if( shape == "triangle" )
    {
        double a = std::atof( argv[2] );
        double b = std::atof( argv[3] );
        double c = std::atof( argv[4] );
        area = geometry::triangleArea( a, b, c );
    }
    else
    {
        std::cout << "Undefined shape! " << shape << "\n";
        exit( EXIT_FAILURE );
    }

    std::cout << "area: " << area << std::endl;

    return 0;
}
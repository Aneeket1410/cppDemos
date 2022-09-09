#include <iostream>
#include <sstream>
#define PI 3.14159265

class Ellipse{
    double majorAxis;
    double minorAxis;

    public:
    Ellipse(){
        majorAxis = 10.0;
        minorAxis = 10.0;
    }

    Ellipse(double x, double y){
        majorAxis = x;
        minorAxis = y;
    }

    double perimeter(){
        return (majorAxis + minorAxis) * PI;
    }

    double area(){
        return PI * majorAxis * minorAxis;
    }
};

int main(int argc, char const *argv[])
{
    Ellipse e1(10, 5);
    Ellipse e2 = {12.5, 6.25};
    Ellipse e3 {32.6, 12.3};
    Ellipse ellipses[] ={e1, e2, e3};
    for (Ellipse e : ellipses)
    {
       std::cout << "Ellipse perimeter: " << e.perimeter() << " and area: "  << e.area() <<std::endl;
    }
    

    return 0;
}

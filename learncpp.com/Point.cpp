#include <iostream>

class Point 
{
    private:
    double m_x, m_y, m_z;

    public: 
    Point() = default;
    Point(double x, double y, double z): m_x{x}, m_y{y}, m_z{z}{}

    friend std::ostream& operator<<(std::ostream& out, const Point& point)
    {
        out << "Point(" << point.m_x << ", " << point.m_y << ", " << point.m_z << ")";
        return out;
    }

    Point operator-() const
    {
        return Point(-m_x, -m_y, -m_z);
    }

    bool operator!() const
    {
        return (m_x == 0.0 && m_y == 0.0 && m_z == 0.0);
    }
};

int main()
{
    Point p1(132.53, -164.2, 192.3);
    Point p2{-p1};
    Point p3{123, 456, 789};
    Point p4;

    std::cout << -p2 <<std::endl;
    std::cout << "Is p2 at origin? " << ((!p4)?"Yes":"No") <<std::endl;
}
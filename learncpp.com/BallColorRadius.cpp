#include <iostream>
#include <string>

class Ball 
{
    private:
    std::string color {"Black"};
    double radius {};

    public:
    Ball(const std::string& col = "Black", double rad = 10.0): color{col}, radius{rad}{} //if only single parameter is passed, it sets other to const
    Ball(double rad): radius{rad}{} //

    void print()
    {
        std::cout << "color: " << color << ", " << "radius: " << radius << std::endl;
    }
};


int main(int argc, char const *argv[])
{
    Ball ref1;
    ref1.print();

    Ball blue{"Blue"};
    blue.print();

    Ball twenty(20.0);
    twenty.print();

    Ball blueTwenty("Blue", 20.0);
    blueTwenty.print();
    return 0;
}

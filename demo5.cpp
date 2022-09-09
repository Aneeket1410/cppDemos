#include <iostream>

#include <cmath>

int main()
{
    std::cout << sqrt(25) << std::endl;
    std::cout << sqrt(-25) << std::endl; //Prints nan: not a number
    std::cout << pow(9,999) << std::endl; //prints inf: infinity
    std::cout << NAN << std::endl;
    std::cout << INFINITY << std::endl;
    std::cout << 10%3 << std::endl;
    std::cout << remainder(10,3.25) << std::endl;
    std::cout << fmod(10,3.25) << std::endl; //fmod and remainder are simillar functions
    std::cout << fmax(10, 20) << std::endl;
    std::cout << fmin(10, 20) << std::endl;
    std::cout << ceil(3.25) << std::endl;
    std::cout << trunc(-2.5) << std::endl;
    std::cout << floor(-2.5) << std::endl;
    std::cout << round(-14.245) << std::endl;
    std::cout << round(-14.545) << std::endl;

}
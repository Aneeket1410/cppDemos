#include <iostream>
#include <string>

int main()
{
    auto x = 5U; //Literal values in conjunction with auto to assign data type
    // 5UL = unsigned long, 5ULL = unsigned long long, 5.0F = floating point
    // 5.5 = double, 5.5L = long double
    // Use g++ demo9.cpp -std=c++11 

    // Hexadecimal and octal
    int number = 24;
    std::cout << number << std::endl;
    std::cout << std::hex << number << std::endl; // hexa representation
    std::cout << std::oct << number << std::endl; // octal representation
    number = 036; //octal representation of 24 in literal form
    std::cout << number << std::endl;
    number = 0x1e; // hex representation of 36
    std::cout << number << std::endl;
    
}
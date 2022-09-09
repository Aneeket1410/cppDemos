#include <iostream>

int main(){
    //Increment and decrement operator
    int z; int x = 10;
    z = x++; // z = 10 and x = 11 i.e. no change in x
    std::cout << "Result of z = x++" <<std::endl;
    std::cout << "value of z: " << z <<std::endl;
    std::cout << "value of x: " << x <<std::endl;
    z = ++x;  // z = 12 ans x = 12 i.e. increament in x
    std::cout << "Result of z = ++x" <<std::endl;
    std::cout << "value of z: " << z <<std::endl;
    std::cout << "value of x: " << x <<std::endl;
}
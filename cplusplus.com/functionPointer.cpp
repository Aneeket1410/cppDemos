#include <iostream>

int divide(int a, int b){
    return a/b;
}

int multiply(int a, int b){
    return a*b;
}

int operation(int a, int b, int (*funct) (int , int)){
    int result;
    std::cout << funct <<std::endl;
    result = (*funct)(a, b);
    return result;
}

int main(int argc, char const *argv[])
{
    int x = 10;
    int y = 5;

    int (*division)(int, int) = divide; // pointer with name division points to function divide
    std::cout << division <<std::endl;
    std::cout << divide <<std::endl;
    int res1, res2;    
    res1 = operation(x, y, multiply); // A function name is pointer to that function
    res2 = operation(x, y, division); // A pointer to function also points to the function

    std::cout << "Result of x* y = " << res1 << " and x/y = " << res2;
    return 0;
}

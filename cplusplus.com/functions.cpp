#include <iostream>
#include <string>

int add (int a, int b = 1){
    return a+b;
}
//function declarations
int substract (int, int);
int multiply (int, int );
int divide (int a, int b);
int remainder (int, int);
int main(){
    std::cout << "The sum 523 + 211 = " << add(523, 211) << std::endl;
    std::cout << "The result of add(523) = " << add(523) << std::endl;
}


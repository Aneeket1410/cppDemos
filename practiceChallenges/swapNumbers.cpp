#include <iostream>
int main(){
    double a,b;
    std::cout << "Enter two numbers seperated with a space: ";
    std::cin >> a >> b;
    a = a - b; //old_a = new_a + old_b OR new_a = old_a - old_b
    b = a + b; //new_b = new_a + old_b = old_a
    a = b - a;// old_a - (old_a - old_b) = old_b
    std::cout << "New numbers: " << a << " " << b;
}
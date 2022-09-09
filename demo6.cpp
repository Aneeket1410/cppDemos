#include <iostream>
#include <string>

int main() {
    std::string greeting = "Hello";
    std::string complete_greeting = greeting + " there";
    std::cout << greeting <<std::endl;
    std::cout << complete_greeting <<std::endl;
    complete_greeting += "!";
    std::cout << complete_greeting << std::endl;
    std::cout << complete_greeting.length() << std::endl;
    // method = member function == functions attached to objects
    
}
 
#include <iostream>

int main()
{
    std::string greeting;
    // std::cin >> greeting; // Takes word before a space/tab/newline
    // std::string left_over;
    // std::cin >> left_over; //Input stream is still on
    // std::cout << greeting << std::endl;
    // std::cout << left_over << std::endl;
    getline(std::cin, greeting); //first argument from where to get the stream, 
    //second arg tells where to store the stream of the the string
    std::cout << greeting << std::endl;
    
}
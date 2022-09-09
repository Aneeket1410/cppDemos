#include <iostream>
#include <string>
#include <sstream>

int main(){
    std::cout << "this is one sentence." << " This is another sentence." << std::endl;
    std::cout << "We can use escape sequence here.\n" << "It doesn't neccessarily flush the stream's buffer." << std::endl;
    std::cout << "Flushing stream buffer is done with endl object. But it has a overhead." << std::endl;

    // int num1;
    // std::cin >> num1;
    // float num2;
    // std::cin >> num2;
    // std::cout << "This is my number: " << num1 << "\nThis is another number: " << num2 <<std::endl; 
    // std::cin >> num1 >> num2;
    // std::cout << "This is my number: " << num1 << "\nThis is another number: " << num2 <<std::endl; 


    //To get a line as input stream
    std::string myStr;
    std::cout  << "What is your name? ";
    getline (std::cin, myStr); //If I have used cin before this and the stream buffer is flushed, then it will not take input from user
    std::cout << "Hello " << myStr << "!" << std::endl;
    std::cout << "What is your favourite sport? ";
    getline (std::cin, myStr);
    std::cout << "I like " << myStr;

    //String Stream by adding header <sstream>
    float price; int quantity;
    std::cout << "Enter the price: ";
    getline(std::cin, myStr);
    std::stringstream(myStr) >> price;
    std::cout << "Enter the quantity: ";
    getline(std::cin, myStr);
    std::stringstream(myStr) >> quantity;
    std::cout << "The total price is "<< price * quantity;
}   
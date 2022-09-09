#include <iostream>
#include <string>
#include <sstream>
int main(){
    //Selection statement
    std::string mystr;
    int num1;
    std::cout << "Enter a number: ";
    getline(std::cin, mystr);
    std::stringstream(mystr) >> num1;    
    if (num1 > 0) std::cout << "You have entered: "<< num1 << ". It is a positive number.";
    else if (num1 < 0) std::cout << "You have entered: "<< num1 << ". It is a negative number.";
    else std::cout << "You have entered zero.";
    //While loop
    int num2 = 200;
    while (num2 > 0) {
        std::cout << num2 <<", ";
        num2--;
    }
    std::cout << " 0.";
    //Do-while loop.
    do {
        num2++;
        getline (std::cin, mystr);
        std::cout << "You entered: " << mystr << std::endl;
        std::cout << "num2: " << num2 << std::endl;

    } while ((mystr != "Exit") && (num2 < 10));

    //For loop 
    for (;(num2 < num1);num2++){
        std::cout << "Num1 = " << num1 << "\tNum2 = " << num2 <<std::endl;
    }
    //For loop with comma operator
    for(int i=1, j = 1; (i - j < 200); i++, j--)
    {std::cout << "i = " << i << "\tj = " << j <<std::endl;}

    

}
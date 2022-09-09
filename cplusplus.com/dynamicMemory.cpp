#include <iostream>
#include <string>
#include <new>

int main(){
    std::string input;
    while(input != "Exit"){
        int size;
        std::cout << "Enter the number of elements you want to add: ";
        std::cin >> size;
        int * myPointer = new (std::nothrow) int[size]; //allocate multiple elements in sequence on heap

        if (myPointer == nullptr) {
            std::cout << "Error: Failed!\n";
            exit;}
        else {
        std::cout << "Success!\n";
        std:: cout << myPointer<<std::endl;
        for (int i=0;i<size ;i++  ) {
            std::cout << "Enter " << i + 1 << "th number: ";
            std::cin >> *(myPointer + i);
        }
        std::cout << "You entered: ";
        for (int i=0;i<size ;i++  ) {
            std::cout << myPointer[i] << " ";
        }
        delete[] myPointer;}
        std::cout << "\nEnter Exit to exit or anything to continue: ";
        std::cin >> input;
    }
    return 0;
}
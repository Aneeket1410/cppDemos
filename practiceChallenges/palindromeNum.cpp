#include <iostream>

bool checkPalindrome(int num=0){
    int numCopy, reverse=0, digit;
    numCopy = num;
    do {
        digit = numCopy%10;
        reverse = reverse*10 + digit;
        numCopy = numCopy /10;
    } while( numCopy != 0);
    std::cout << "Reverse: " << reverse << std::endl;
    return (num == reverse);
}

int main(){
    int n = 1;
    std::cout << "Enter 0 to exit the program" << std::endl;
    while (n != 0) {
        std::cout << "Enter the number to be found as palindrome: "<< std::endl;
        std::cin >> n;
        if (n==0) break;
        std::cout << "You entered: " << n << std::endl;
        if (checkPalindrome(n)) std::cout << n << " is a palindrome."<< std::endl;
        else std::cout << n << " is not a palindrome."<< std::endl;
    }
    return 0;
}
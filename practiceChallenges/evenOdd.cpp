#include <iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter a number: ";
    int n =0;
    std::cin >> n;
    if (n%2 == 0) std::cout << n << " is Even.";
    else std::cout << n << " is odd.";
    
    return 0;
}

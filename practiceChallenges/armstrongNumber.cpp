#include <iostream>

bool isArmstrong(int x){
    //A number whose sum of cube of digits is equal to itself.
    int sum = 0;
    int x_copy = x;
    int dig;
    do{
        dig = (x_copy%10);
        sum += dig * dig * dig;
        x_copy /= 10;
    } while (x_copy != 0);
    std::cout << sum << std::endl;
    return(sum == x);
}

int main(int argc, char const *argv[])
{
    std::cout << "Enter a number: ";
    int n =0;
    std::cin >> n;
    if (isArmstrong(n)) std::cout << n << " is an Armstrong number.";
    else std::cout << n << " is not an Armstrong number.";


    return 0;
}


#include <iostream>
#include <math.h>

bool isPrime(int x){
    if (x <=1) return false;
    else {
        for (int i = 2; i<=sqrt(x); i++ ){
            if(x%i == 0) return false;
        }  return true;
    }
}

int main(int argc, char const *argv[])
{
    std::cout << "Enter a number: ";
    int n =0;
    std::cin >> n;
    if (isPrime(n)) std::cout << n << " is prime.";
    else std::cout << n << " is not a prime.";


    return 0;
}

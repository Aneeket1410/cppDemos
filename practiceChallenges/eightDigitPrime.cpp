#include <iostream>
#include <math.h>
#include <list>

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
    for (int n = 99999999; n>10000001;n-=2){
        if (isPrime(n)) {std::cout << n << " is largest eight digit prime." << std::endl; break;}        
    }
    return 0;
}

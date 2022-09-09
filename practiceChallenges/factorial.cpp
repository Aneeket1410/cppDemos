#include <iostream>

unsigned long long factorialOf(int num){
    if (num >1) return num * factorialOf(num - 1);
    else return 1;
}

unsigned long long factLoop(int num){
    unsigned long long fact = 1;
    for(int i = 1; i<=num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    std::cout << "Enter an integer: ";
    int n;
    std::cin >> n;
    if (n<0){
        std::cout << "Factorial of negative number doesn't exist!";
    } else {
    std::cout << n << "! = " << factorialOf(n) << std::endl;
    printf("factLoop(%d) = %llu", n, factLoop(n));}
}
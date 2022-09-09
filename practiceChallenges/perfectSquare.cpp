#include <iostream>

int main(){
    std::cout << "Enter a positive integer number: ";
    int n = 0;
    std::cin >> n;

    int oddSum = 0;
    // n + (n-1) + .. + 2 + 1 = n*(n+1)/2 = n^2/2+n/2
    // or 2*sum - n = n^2 
    // or 2*Sum(n) - sum(1) = n^2
    int count = 0;
    for (int i = 1; oddSum<n; i+=2){
        oddSum += i; 
        count++;  
    }
    // std::cout << oddSum;

    if (oddSum == n) std::cout << n <<" is a perfect square, with square root "<< count << std::endl;
    else std::cout << n << " is not a perfect square" << std::endl;
}
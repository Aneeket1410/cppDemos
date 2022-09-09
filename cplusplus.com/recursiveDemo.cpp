#include <iostream>

int function1(int);
int function2(int);
bool validateFunction1(int a, int sum){
    return (sum == (a*(a+1)/2));
}

int main(){
    int myInt;
    std::cout << "Enter a number: ";
    std::cin >> myInt;
    int sum = function1(myInt);
    std::cout << "The sum of integers upto " << myInt << " is " << sum << std::endl;
    if (validateFunction1(myInt, sum)) std::cout << "The results are correct.";
    else std::cout << "Recursive function failed.";
}

int function1(int a){
    if (a>0){
        return (a+function1(a-1));
    } else return 0;
}
//sum of odd numbers upto given number
int function2(int a){
    if (a>1){
        a--;
        std::cout << a << std::endl;
        return (a+function2(a-1));
    } else return 0;
}
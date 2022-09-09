#include <iostream>

int main(){
    //Assignment operators
    int a,b;
    a = 5;
    b = 13;
    a = b; // Assign contents at memory location of b to a.
    b = 2; // b changes but a doesn't because they are different
    // variables pointing to two different locations
    int x = 10;
    int y = 2 + (x=5); // Assignment operations can be evaluated inside other expressions
    // Above operation is equivalent to 1. x = 5 and y = 2 + x; (Assignment operations precedes)
    // x becomes 5 and y = 7
    std::cout << "value of x is: " << x << " and value of y is: " << y << std::endl;

    //Arithmetic operators
    std::cout << "a + b = " << a+b<<std::endl;
    std::cout << "a - b = " << a-b<<std::endl;
    std::cout << "a * b = " << a*b<<std::endl;
    std::cout << "a / b = " << a/b<<std::endl; //integral division
    std::cout << "a % b = " << a%b<<std::endl; //remainder of integral division

    //Increment and decrement operator
    int z; x = 10;
    z = x++; // z = 11 and x = 10 i.e. no change in x
    std::cout << "Result of z = x++" <<std::endl;
    std::cout << "value of z: " << z <<std::endl;
    std::cout << "value of x: " << x <<std::endl;
    z = ++x;  // z = 12 ans x = 11 i.e. increament in x
    std::cout << "Result of z = ++x" <<std::endl;
    std::cout << "value of z: " << z <<std::endl;
    std::cout << "value of x: " << x <<std::endl;

    //Relational operators (==, !=, <=, >=, >, <)
    int num1, num2; num1 = 10; num2 = 20;
    std::cout << "Values of num1 and num2 are: " << num1 << " and " << num2 <<std::endl;
    std::cout << "Result of (num1 == num2): " << (num1 == num2) <<std::endl;
    std::cout << "Result of (num1 != num2): " << (num1 != num2) <<std::endl;
    std::cout << "Result of (num1 >= num2): " << (num1 >= num2) <<std::endl;
    std::cout << "Result of (num1 <= num2): " << (num1 <= num2) <<std::endl;
    std::cout << "Result of ((num1 = 21) <= num2): " << ((num1 = 21) <= num2) <<std::endl; 
    // first assignment  num1 = 21 occurs, then expression is evaluated  

    //Logical operators (!, &&, ||)
    num1 = 20; num2 = 30;
    std::cout << "Values of num1 and num2 are: " << num1 << " and " << num2 <<std::endl;
    std::cout << "Result of (num1 <= num2) || (++num1 != 20): " << ((num1 <= num2) || (++num1 != 20)) <<std::endl;
    std::cout << "Values of num1 and num2 are: " << num1 << " and " << num2 <<std::endl;
    //for OR (||), if the left-hand side expression is true, the combined result is true (the right-hand side expression is never evaluated).
    std::cout << "Result of (num1 <= num2) || (++num1 != 20): " << ((num1 > num2) && (++num1 != 22)) <<std::endl; 
    std::cout << "Values of num1 and num2 are: " << num1 << " and " << num2 <<std::endl;
    //For AND (&&), if the left-hand side expression is false, the combined result is false (the right-hand side expression is never evaluated).

    //Conditional ternary operator
    num1 = (7 == 5) ? 5 : 4;
    std::cout << "Result of num1 = (7 == 5) ? 5 : 4 is " << num1 << std::endl;
    num1 = (7 == 5 + 2) ? 5 : 4;
    std::cout << "Result of num1 = (7 == 5 + 2) ? 5 : 4 is " << num1 << std::endl;

    // Comma operator
    num1 = (num1 = 10, num2 = 20, num1 + num2); // should assign num1 to 30
    std::cout << "Result of num1 = (num1 = 10, num2 = 20, num1 + num2) is " << num1 << std::endl;

    //explicit type casting operator
    float num5 = 3.142;
    int myInt;
    myInt = (int) num5;
    std::cout << "Value of casted myInt from num5 is " << myInt << std::endl;
    // Everything after decimal place is lost
}
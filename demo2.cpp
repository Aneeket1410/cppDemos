#include <iostream>
using std::cout;
using std:: cin;
double power(double, int); //Declaration

int main(){
    int base, exponent;
    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the exponent: ";
    cin>>exponent;
    //Call to the power function
    double myPower = power(base, exponent);
    cout << base << "^" << exponent << " = " << myPower << std::endl;
}

double power( double base, int exponent ){ 
    //Definition can be done anywhere if function is declared at the top
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result*base;
    }
    
    return result;
}

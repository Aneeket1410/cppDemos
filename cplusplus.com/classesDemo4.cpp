#include <iostream>
#include <math.h>

class myClass
{
private:
    int myInt;

public:
    myClass(int a){myInt = a;};
    void print(); //non const member function
    int square() const {
         std::cout << "This is a const function"<< std::endl;
        return myInt* myInt;} //const member function;
    int square() {
        std::cout << "This is a non-const function"<< std::endl;
        return pow(myInt,2);} //OVERLOADED BASED ON CONST-NESS
};

void myClass::print(){
    std::cout << "This is class with member myInt: "<<myInt <<std::endl;
}

int main(int argc, char const *argv[])
{
    myClass obj0 (10);
    const myClass obj1 (20);
    obj0.print();
    std::cout << obj0.square() << std::endl;
    // obj1.print(); Not allowed
    std::cout << obj1.square()<< std::endl;

    
    return 0;
}

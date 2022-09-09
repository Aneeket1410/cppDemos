#include <iostream> 


class MyClass1{
    double a,b;
    public:
    MyClass1(double i, double j): a(i), b(j){}
    MyClass1(){}

};

class MyClass2{
    int x,y;

    public:
    MyClass2 (int var1, int var2) : x(var1), y(var2){ }
    int result(){return x*y;}
};


int main(int argc, char const *argv[])
{
    //explicit type casting
    MyClass1 obj1(3,5);
    MyClass1 obj2;
    MyClass2 * pmc2;



    //Go to address of obj1 and explicitly make pmc2 to point towards obj1 contents
    pmc2 = (MyClass2*) &obj1;

    std::cout << pmc2->result()<<std::endl;

    pmc2 = (MyClass2*) &obj2;
    std::cout << pmc2->result();

    return 0;
}

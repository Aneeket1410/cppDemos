#include <iostream>
#include <exception>

class Base { virtual void Dummmy(){}};
class Derived: public Base { int a;};
class SomeClass {};

main(){

    try {
        Base * pba = new Derived;
        Base * pbb = new Base;
        Derived * pda = new Derived;
        // Derived * pdb = new Base;
        int * pi; //pointer of fundamental type
        SomeClass* psc;
        Base * pb;
        Derived * pd;

        // pi = dynamic_cast <Derived*> (pba);
        // psc = dynamic_cast <Derived*> (pba);


        //downcast: from pointer to base class to pointer to derived class
        pd = dynamic_cast <Derived*> (pba);
        if (pd==0) std::cout << "Null pointer on first type-cast.\n";
        pd = dynamic_cast <Derived*> (pbb);
        if (pd==0) std::cout << "Null pointer on Second type-cast.\n";

        //upcast: from pointer to derived class to pointer to base class
        pb = dynamic_cast <Base*> (pda);
        if (pb==0) std::cout << "Null pointer on Third type-cast.\n";


    } catch (std::exception& e) {std::cout << "Exception: " << e.what();}

    return 0;
}
#include <iostream>
#include <string>

class MyClass {
    int memberVar1, memberVar2;

    public:
    MyClass(){};
    MyClass(int a, int b): memberVar1(a), memberVar2(b){};
    friend MyClass duplicate(const MyClass&);
    int product(){
        return memberVar1 * memberVar2;
    }
};

MyClass duplicate(const MyClass& param){
    MyClass result;
    result.memberVar1 = param.memberVar1 * 2; //access to private members of result and param 
    result.memberVar2 = param.memberVar2 * 2;
    return result;
}

int main(int argc, char const *argv[])
{
    MyClass obj1 = MyClass(10, 20);
    // MyClass obj3(15, 30);
    MyClass obj2;

    obj2 = duplicate(obj1);
    std::cout << obj1.product();
    std::cout << obj2.product();

    return 0;
}

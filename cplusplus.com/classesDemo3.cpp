#include <iostream>

class CVector
{
private:
    int x, y;
    
public:
    static int count; //static member
    CVector(int, int);
    ~CVector();
    //returns reference to the object
    CVector operator= (const CVector param){
    x = param.x; y = param.y;
    return *this;
}
};

CVector::CVector(int a, int b)
{
    count++;
    x = a; y = b;
}

//Initialize static member
int CVector::count = 0;

int main(int argc, char const *argv[])
{
    
    CVector a (12, 31);
    CVector b (25, 12);
    std::cout << b.count << std::endl;
    CVector c (5, 2);
    std::cout << a.count << std::endl;
    std::cout << c.count << std::endl;
    std::cout << "Count= " << CVector::count;
    return 0;
}

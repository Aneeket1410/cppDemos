// overloading operators example
#include <iostream>
using namespace std;

class CVector {
  public:
    int x,y;
    CVector () {};
    CVector (int a,int b) : x(a), y(b) {}
    CVector operator + (const CVector&); // Operator as member function

};

CVector CVector::operator+ (const CVector& param) {
  CVector temp;
  temp.x = x + param.x;
  temp.y = y + param.y;
  return temp;
}
//operator as non member function
CVector operator- ( const CVector& lhv, const CVector& rhv){ //to pass object as params, use referencing operator
    return CVector(lhv.x-rhv.x, lhv.y - rhv.y);
}

int main () {
  CVector foo (3,1);
  CVector bar (1,2);
  CVector result;
  result = foo + bar;
  CVector minus = foo - bar;
  cout << result.x << ',' << result.y << '\n';
  cout << minus.x << ',' << minus.y;
  return 0;
}
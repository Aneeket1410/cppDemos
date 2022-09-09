#include <iostream>

template <class SomeType>
SomeType sum (SomeType a, SomeType b)
{
  return a+b;
}
template <typename SomeType>  // typename ~ class (both keyword means the same thing) 
SomeType sum2 (SomeType a, SomeType b)
{
  return a+b;
}



template <class Type1, class Type2>
Type1 sum3 (Type1 a, Type2 b)
{
  return a+b;
}
 
template <class Type1, int myInt> //expression 
Type1 constantAdd (Type1 a)
{
  return a+myInt;
}


int main() {
    std::cout << sum3<float, int>(20.01, 10) << std::endl;
    std::cout << sum3<float, double>(20.3, 12.25) << std::endl;
    std::cout << constantAdd<int, 3>(20) << std::endl;
    std::cout << constantAdd<float, 1000>(10.25) << std::endl;
}

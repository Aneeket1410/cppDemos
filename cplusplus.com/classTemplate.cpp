#include <iostream>
template <class T>
class MyTriplet{
    T num [3];

    public:
    MyTriplet(T a, T b, T c){
        num[0] = a; num[1] = b; num[2] = c;
    };
    T getMax();

};

/*In case that a member function is defined outside 
the defintion of the class template, it shall be
 preceded with the template <...> prefix */
template <class T>
T MyTriplet<T>::getMax(){
    T max;
    if (this->num[0] >= this->num[1]) {
        if (this->num[0] >= this->num[2])
            max = this->num[0];
        else
            max = this->num[2];
    } else {
        if (this->num[1] >= this->num[2])
            max = this->num[1];
        else
            max = this->num[2];
    }
    return max;

}

int main(int argc, char const *argv[])
{
    MyTriplet<int> myInts (100, 200, 300);
    std::cout << myInts.getMax() << std::endl;
    MyTriplet<short> myShorts (1,2, 3);
    std::cout << myShorts.getMax() << std::endl;
    MyTriplet<float> myFloats (10.23, 20.34, 30.45);
    std::cout << myFloats.getMax() << std::endl;
    MyTriplet<double> myDoubles (100.234, 200.345, 300.456);
    std::cout << myDoubles.getMax() << std::endl;
    return 0;
}

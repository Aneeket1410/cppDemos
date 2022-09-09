#include <iostream> //reprocessor
//using directive
// using namespace std;
using std::cout;
using std::cin;
// namespace std;


int main() { //You alwys have the main function
    int slices = 5; //declaration and initialization
    slices = 5; //Assignment is more like storing things
    cout << "Yo man, how many slices of pizza you want? ";
    std::cin >> slices;
    std::cout << "Hello world\n" << slices << "\nslices of pizza";
    //std standard: namespace,  iostream is a namespace which has cout
    return 0;
}


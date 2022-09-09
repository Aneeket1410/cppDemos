#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    //a variable which stores the address of another variable is called a pointer.
    int myInt = 2012;
    auto myIntAd = &myInt; //myIntAdd became a pointer of int type
    int var1 = 10, var2 = 20;
    var1 = var2; //value contained at address of var2 is assigned at var1's address.
    //Addresses remain same for both vars while, value of only var1 changes
    //Ampersand operator outputs memory location, where the variable is stored.

    int var3 = *myIntAd; //value at address value contained at myIntAd (Value of myIntAd is treated as address)

    int* p; // declare a int pointer
    //in the background var1 = var2 works like
    p = &var2; //store address of var2 to ptr
    *p = var1; //go to variable pointed by p and assign it to value at var1

    std::cout << &myInt << std::endl;
    std::cout << "myIntAd: " << myIntAd <<  std::endl;
    std::cout << "Address of myInt: "<< myIntAd<<". Value at myInt: " <<var3;

    int arr[] {1,2,3,4,5};
    
    int * myPtr = arr; 
    std::cout <<"Pointer: " << myPtr<<std::endl;
    std::cout << "Third value of arr: " << *(myPtr + 2) <<std::endl;
    myPtr++; //Increment the pointer by size of the data type of array element
    std::cout <<"Pointer: " << myPtr<<std::endl;
    std::cout << "Second value of arr: " << *myPtr<<std::endl;
    myPtr = &arr[3];
    std::cout <<"Pointer: " << myPtr<<std::endl;
    std::cout << "Fourth value of arr: " << *myPtr<<std::endl;
    *(myPtr+1) = 6;
    std::cout << arr[4] << std::endl;

    for (auto &elem : arr)
    {
        std::cout << &elem << " : " << elem << std::endl;
    }

    return 0;

}

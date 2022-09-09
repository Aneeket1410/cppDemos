#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    char myStr[] = {'A', 'n', 'e', 'e', 'k', 'e', 't', '\0'};
    char myStr2[] = "Aneeket"; 
    std::string myword = "man";
    
    
    //Conversion of c-string to string and vice versa: 
    std::string myStr3 = myStr; //c-string to string
    const char *p = myStr3.data(); //string to c-string using member function c_str() or data()
    // char myStr4[] = myStr3.c_str(); 
    //Not allowed as arrays are first need to be initialized and cannot be copied directly.
    std::cout << myStr3.c_str();

    std::cout << myStr << " & " << myStr2 <<std::endl;
    return 0;

}

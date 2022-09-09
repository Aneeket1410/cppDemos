#include <iostream>
// #include <string>

int main(){
   // wchar_t number = L'ם'; 
    //wchar_t is used to represent characters that require more memory to represent them than a single char.
    float area = 24.56; 
    //For floating-point types, the size affects their precision, by having more or less bits for their significant and exponent.
    bool isDone = true;
    int myNUmber = 10;
    int a, b, c;
    char test = 'A';
    //void, which identifies the lack of type
    //type nullptr, which is a special type of pointer
    //std::cout << "This is my number: " << number << std::endl;

    int num1 = 0; //c-like
    int num2(20); //constructor
    int num3{120}; //uniform

    int num4 = 0;
    auto num5 = num4; 
    decltype(num4) num6;

    std::string mystr = "I am a programmer";
    std::cout << mystr + "\n \123 is a capital s and \x73 small s." << std::endl;
    std::string mystr2 = "This string can be \
    expressed in two lines.";
    std::string mystr3 = R"(tutorials\tpoint\t)";
    std::cout << mystr3;
    std::cout << R"&%(string with \backslash)&%";
    return 0;
}
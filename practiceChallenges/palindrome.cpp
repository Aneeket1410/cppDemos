#include <iostream> 

int main(){
    std::string str;
    std::cout << "Enter the string to be found as palindrome: "<< std::endl;
    std::cin >> str;
    int s = str.size();
    std::cout << s << std::endl;
    bool isPalindrome = true;
    for (int i=0; i < s/2; i++){
        // std::cout << str[i] << " " << str[s-1-i]<< ": " <<(str[i] == str[s-i])<< std::endl;
        if (str[i] == str[s-1-i]) continue;
        else {
            isPalindrome = false;
            break;} 
    }
    if (isPalindrome) std::cout << str << " is a palindrome."<< std::endl;
    else std::cout << str << " is not a palindrome."<< std::endl;
}



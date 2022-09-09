//String methods
#include <iostream>
#include <string>

int main(){
    std::string greeting = "Hello";
    greeting += " there";
    greeting.insert(5, "        ");
    std::cout << greeting << std::endl;
    greeting.erase(5, 4);
    std::cout << greeting << std::endl;
    greeting.erase(5);
    std::cout << greeting << std::endl;
    greeting.pop_back();
    greeting = "What the hell";
    // greeting.replace(9, 4, "Heaven");
    // std::cout << greeting << std::endl;
    // greeting.replace(9, 6, "****");

    //Another way of censoring 
    int hell_pos = greeting.find("hell");  //find returns the postion of word queried from a string
    greeting.replace(hell_pos, 4, "****");
    std::cout << greeting << std::endl;
    std::cout << greeting.size() << std::endl;

    //Substring 
    greeting = "What is up?";
    std::cout << greeting.substr(5, 2) << std::endl;

    std::cout << greeting.find_first_of("aeiou") << std::endl;
    //npos not found then returns largest value of long
    if(greeting.find_first_of("!") == -1) std::cout << "NOT FOUND!"<< std::endl;
    // dot compare is more important in JAVA
    if(greeting.compare("What is up?") == 0) std::cout << "Equals" << std::endl;
}
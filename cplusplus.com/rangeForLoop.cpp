#include <iostream>
#include <string>

int main(){
    std::string myStr;
    getline(std::cin, myStr);

    for(char c:myStr){
        std::cout << "\'" << c << "\' _ ";
    }
}
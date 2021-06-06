#include <iostream>
#include <array>


void print_array(std::array<int, 22> &data, int size){
    
    for(int i; i < size; i++){
        std::cout << data[i] << '\t';

    }
    std::cout << std::endl;
    std::cout << data.size();
}
int main(int argc, char const *argv[])
{
    std::array<int, 22> myArr {1,2 ,4};
    print_array(myArr, 3);
    return 0;
}

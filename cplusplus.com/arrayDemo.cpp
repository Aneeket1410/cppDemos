#include <iostream>
#include <array>

//Only address is passed in an array
void funct1(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
        arr[i] = i;
    }
    
}

void funct2(int arr[][5], int height){
    for (int i = 0; i < height; i++)
    {
        int j =0;
        while (j<5)
        {
            std::cout << arr[i][j]<< " ";
            j++;
        }
    }
    
}

template <std::size_t SIZE>
void funct3(std::array<int, SIZE> arr){
    for (auto &elem : arr)   //range based loops cannot deal with a pointer.
    {
        std::cout << elem << " ";
    }
    
}

int main(int argc, char const *argv[])
{
    int myArr1[5] = {1, 5, 3, 5,9}; //Initializing with value.
    int myArr2[5] = {1,2,3}; //Will make last two elements zero.
    int myArr3[] = {10, 5, 6}; //Compliler will take size = 3.
    int myArr4 [] {10, 20, 5}; //c++ 11 more generic initialization

    //1D array
    std::cout << std:: endl << "_____________________________________" << std:: endl;
    std::cout << "Function to print built in 1D array: " << std:: endl;
    funct1(myArr1, 5 );
    std::cout << std:: endl << "_____________________________________" << std:: endl;

    //multidim array
    int myArr5[3][5] = {{10,2,3,1,9}, {1, 2, 3, 4, 5}, {9, 6, 4, 2, 0}};
    std::cout << "Function to print built in 1D array: " << std:: endl;
    funct2(myArr5, 3);
    std::cout << std:: endl << "_____________________________________" << std:: endl;

    //Library array
    std::array<int, 6> myArr6 {1,2,3,4,5,6};
    std::cout << "Function to print library 1D array: " << std:: endl;
    funct3<myArr6.size()>(myArr6);
    std::cout << std:: endl << "_____________________________________" << std:: endl;

    return 0;
}

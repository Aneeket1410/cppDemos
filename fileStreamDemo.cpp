#include <iostream>
#include <fstream>
#include <vector>

void print_vector(std::vector<std::string> vect){
    for (auto &&i : vect)
    {
        std::cout << i << std::endl;
    }
    
}

int main(int argc, char const *argv[])
{
    //writing to a file
    std::string filename;
    std::cin >> filename;

    //create object of output file stream
    std::ofstream file;
    file.open(filename, std::ios::app);

    std::vector<std::string> names;
    if (file.is_open()){
        names.push_back("Aneeket");
        names.push_back("Gena");
        names.push_back("Priyanka");
        names.push_back("Nitin");
    }
    else {
        std::cout << "Couldn't open the file." << std::endl;
    }

    for (auto &&name : names)
    {
        file << name << std::endl;
    }
    
    file.close();

    //Reading from a file 
    std::ifstream ifile;
    ifile.open("Hello.txt");

    std::string item;
    std::vector<std::string> items;
    while(ifile >> item){
        items.push_back(item);
    }

    print_vector(items);

    return 0;
}

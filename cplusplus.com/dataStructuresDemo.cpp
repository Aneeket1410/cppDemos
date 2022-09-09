#include <iostream>

    struct my_details {
        std::string myName; //members
        int Age; //member
        long long mobile;
    };
    

    struct school {
        std::string schoolName;
        std::string city;
    } COEP, MIT, DU;



void printPerson(my_details person){
    std::cout << "My Age: "<< person.Age 
    << "\nMy Name: " << person.myName
    << "\nmobile: "<< person.mobile <<std::endl;
}


int main(int argc, char const *argv[])
{

    my_details person1;
    std::cout <<"Enter your Name: ";
    std::cin >> person1.myName;
    std::cout <<"Enter your Age: ";
    std::cin >> person1.Age;
    std::cout <<"Enter your 10 digit number: ";
    std::cin >> person1.mobile;
    
    printPerson(person1);


    return 0;
}


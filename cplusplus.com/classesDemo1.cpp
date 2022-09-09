#include <iostream>

class Student{
    std::string firstName;
    std::string lastName;
    int age;

    public:

    //default constructor
    Student(){
        firstName = "Lorem";
        lastName = "Epsum";
        age = 18;
    }
    //Parameterized constructor
    Student(std::string fName, std::string lName, int Age){
        firstName = fName;
        lastName = lName;
        age = Age;
    }
    // function to initialize 
    // void setValues(std::string fName, std::string lName, int Age){
    //     firstName = fName;
    //     lastName = lName;
    //     age = Age;
    // }
    void printDetails(){
        std::cout << "Name: " << firstName << " " << lastName<<std::endl;
        std::cout << "Age: " << age <<std::endl;
    }
    
};

int main(int argc, char const *argv[])
{
    //Initialized object
    Student student1("Aneeket", "Lande", 25);
    // student1.setValues("Aneeket", "Lande", 25);
    student1.printDetails();
    //Unitialized object
    Student student2;
    student2.printDetails();
    return 0;
}
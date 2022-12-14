#include <array>
#include <iostream>
#include <string_view>
#include <stdlib.h>

static uint32_t sAllocCount{0};
void* operator new(size_t size)
{
    std::cout << "Allocating " << size << " Bytes"<<std::endl;
    sAllocCount++;
    return malloc(size);
}
#include <string>

class Animal
{
    protected:
    std::string m_name{};

    Animal(const std::string& name): m_name{name}{}

    //prevent slicing
    Animal(const Animal&) = delete;
    Animal& operator=(const Animal&) = delete;
    public:

    const std::string& getName() const {return m_name;}
    virtual std::string_view speak() const {return "???";}
};

class Cat: public Animal
{
    public:
    Cat(const std::string& name): Animal{name}{}
    std::string_view speak() const {return "Meow";}
};

class Dog: public Animal
{
    public:
    Dog(const std::string& name): Animal{name}{}
    std::string_view speak() const {return "Wuff";}
};

int main()
{
    const Cat fred = new{ "Fred" };
    const Cat misty{ "Misty" };
    const Cat zeke{ "Zeke" };
 
    const Dog garbo{ "Garbo" };
    const Dog pooky{ "Pooky" };
    const Dog truffle{ "Truffle" };
 
    // Set up an array of pointers to animals, and set those pointers to our Cat and Dog objects
    const auto animals{ std::array<const Animal*, 6>({&fred, &garbo, &misty, &pooky, &truffle, &zeke }) };

    std::cout << "total number of allocations: " << sAllocCount  <<std::endl;
    for (const auto animal : animals)
    {
        std::cout << animal->getName() << " says " << animal->speak() << '\n';
    }
 
    return 0;
}
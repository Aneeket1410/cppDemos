#include <iostream>

class Del 
{
    private:
    float m_value{}; 
    char m_letter{};
    public:
    Del(char letter = 'x', float value=1):m_value{value}, m_letter{letter}
    {
        std::cout << "Thid does one thing: "<< m_letter << std::endl;
    }

    void fun(char c= 'x')
    {
        Del(c); //duplicate code
    }

    void print()
    {
        std::cout << "value: " << m_value << ", letter: " << m_letter <<std::endl;
    }

};

int main(int argc, char const *argv[])
{
    Del del{};
    Del del3{'v'};
    Del del4{'j', 100.3f};
    del4.print();
    del4.fun();
    del4.print();
    return 0;
}

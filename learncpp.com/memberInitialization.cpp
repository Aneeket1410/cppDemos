#include <iostream>

class Rectangle 
{
    private:
    float m_width{1.0f};
    float m_length{1.0f};

    public:
    Rectangle( float width, float length): m_width{width}, m_length{length}{}
    Rectangle()
    {
        std::cout << "A new rectangle created" << std::endl;
    }
    Rectangle (float width ): m_width{width}{}

    float get_length(){return m_length;}
    float get_width(){return m_width;}

    void print()
    {
    std::cout << "My Rectangle: " << "("<< m_length << ", " << m_width << ")" << std::endl;
        
    }
};

int main(int argc, char const *argv[])
{
    Rectangle inst1{2.0f, 5.2f};
    Rectangle inst2{5.0f};

    Rectangle* pinst3 = new Rectangle{};

    // std::cout << "My Rectangle: " << "("<< inst1.get_length() << ", " << inst1.get_width() << ")" << std::endl;
    // std::cout << "My Rectangle: " << "("<< inst2.get_length() << ", " << inst2.get_width() << ")" <<std::endl;
    // std::cout << "My Rectangle: " << "("<< pinst3->get_length() << ", " << pinst3->get_width() << ")" <<std::endl;

    inst1.print();
    inst2.print();
    pinst3->print();
    return 0;
}

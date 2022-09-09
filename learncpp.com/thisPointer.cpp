#include <iostream>

class Something
{
private:
    int m_data;
    mutable int getAccessed{0};
 
public:
    static int s_data; 
    // static int s_data{1001}; 
    // static constexpr int s_data{1001};
    Something(int data)
    {
        this->m_data = data;
        s_data = 100;
    }


    void setData( int data)
    {
        m_data = data;
    }
    int getData() const
    {
        getAccessed++;
        return m_data;
    }

    static int getSData()
    {
        return s_data; //not allowed
    }   

};

void doSomething(const Something& sometng)
{
    std::cout << sometng.getData(); //errpr getData is not a const mem function, hence cannot be accessed by a method which passes object by const reference
}

class Calc
{
    private:
    int m_value{};

    public:
    Calc(int val): m_value{val}{};

    Calc& add(int value){m_value+=value; return *this;}
    Calc& sub(int value){m_value-=value; return *this;}
    Calc& mul(int value){m_value*=value; return *this;}

    int getValue(){return this->m_value;}
};


int Something::s_data{0};
int main(int argc, char const *argv[])
{

    Something s1{10};
    s1.s_data = 2;
    std::cout << s1.s_data <<std::endl;
    
    Something s2{12};
    std::cout << s2.s_data <<std::endl; //this will be 2 even if we haven't set it for this object

    return 0;
}

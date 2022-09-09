#include <iostream>
class Cents
{
    private:
    int m_cents;
    public:
    Cents(int cent): m_cents{cent}{}

    //unary negation: doesn't modify value of Cents, hence can be made const
    Cents operator-() const
    {
        return Cents(-m_cents);
    }

    //member function operator overloading
    Cents operator-(int other)
    {
        return Cents(m_cents - other);
    }

    //
    Cents operator-(Cents other)
    {
        return Cents(m_cents - other.m_cents);
    }

    Cents operator-=(Cents other)
    {
        return *this - other;
    }

    Cents operator ++()
    {
        return Cents(++m_cents);
    }
    Cents operator --()
    {
        return Cents(--m_cents);
    }

    Cents operator--(int) //fake dummy argument to distinguish between post and  pre increament
    {
        Cents temp(*this);
        --(m_cents);
        return temp; //return saved state which is fake
    }
    Cents operator++(int) //fake dummy argument to distinguish between post and  pre increament
    {
        Cents temp(*this);
        ++(m_cents);
        return temp;
    }

    friend std::ostream& operator <<(std::ostream& out, Cents cents);  
    friend bool operator<(const Cents& cents1, const Cents& cents2);
    friend bool operator>(const Cents& cents1, const Cents& cents2);
    friend bool operator<=(const Cents& cents1, const Cents& cents2)
    {
        return !(cents1 > cents2);
    }

    friend bool operator>=(const Cents& cents1, const Cents& cents2)
    {
        return !(cents1 < cents2);
    }

};

bool operator<(const Cents& cents1, const Cents& cents2)
{
    return (cents1.m_cents < cents2.m_cents);
}

bool operator>(const Cents& cents1, const Cents& cents2)
{
    return (cents1.m_cents > cents2.m_cents);
}

std::ostream& operator << (std::ostream& out, Cents cents)
{
    out << "Cents {" << cents.m_cents << "}";
    return out;
}

int main() 
{
    Cents c1{5};
    Cents c2{5};
    // c2 = -c1;
    Cents c3{0};
    c3-= c1;
    std::cout << "Original cents c1: " << c1 << "\nand negative of that is: " << c2 <<std::endl;
    std::cout << "result of c3 - 5: " << c3 - 5 <<std::endl;
    std::cout << "result of c3 -= c1: " << (c3 -= c1) <<std::endl;
    std::cout << "result of c1 > c2: " << (c1>c2? "True" : "False") << std::endl;
    std::cout << "result of c1 < c2: " << (c1<c2? "True" : "False") << std::endl;
    std::cout << "result of c1 >= c2: " << (c1>=c2? "True" : "False") << std::endl;
    std::cout << "result of ++c1: " << ++c1 << std::endl;
    std::cout << "result of --c1: " << --c1 << std::endl;
    std::cout << "result of c1++: " << c1++ << std::endl;
    std::cout << "result of c1--: " << c1-- << std::endl;
}
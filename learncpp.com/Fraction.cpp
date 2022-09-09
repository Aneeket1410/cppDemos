#include <iostream>
#include <cassert>

class Fraction
{
    private:
    int m_numerator{};
    int m_denominator{1};

    public:
    Fraction() = default;
    Fraction(int numerator, int denominator): m_numerator{numerator}, m_denominator{denominator}
    {
        assert(denominator != 0);
        reduce();
    }
    void print()
    {
        std::cout << m_numerator << '/' << m_denominator <<std::endl;
    }

    static int gcd(int a, int b) 
    {
    return (b == 0) ? (a > 0 ? a : -a) : gcd(b, a % b);
    }

    void reduce()
    {
        if(m_numerator != 0 && m_denominator != 0)
        {
        int GCD {Fraction::gcd(m_numerator, m_denominator)};
        m_numerator /= GCD;
        m_denominator /=GCD;            
        }
    }

    Fraction(const Fraction& fract): m_numerator{fract.m_numerator}, m_denominator{fract.m_denominator}
    {
        std::cout << "copy constructor called" <<std::endl;
    }
    friend Fraction operator*(const Fraction& fract1, const Fraction& fract2)
    {
        return Fraction{fract1.m_numerator*fract2.m_numerator, fract1.m_denominator*fract2.m_denominator};
    }

    friend Fraction operator*(const int value, const Fraction& fract)
    {
        return Fraction{value* fract.m_numerator, fract.m_denominator};
    }
    friend Fraction operator*(const Fraction& fract, const int value)
    {
        return Fraction{value* fract.m_numerator, fract.m_denominator};
    }

    Fraction& operator= (const Fraction& fraction);

    friend std::ostream& operator <<(std::ostream& out, const Fraction& fract);
    friend std::istream& operator >>(std::istream& in, Fraction& fract);

 
    
};

std::ostream& operator <<(std::ostream& out, const Fraction& fract)
{
    out << fract.m_numerator << '/' << fract.m_denominator;
    return out;
}

std::istream& operator >>(std::istream& in, Fraction& fract)
{
    in >> fract.m_numerator;
    in.ignore(std::numeric_limits<std::streamsize>::max(), '/');
    in >> fract.m_denominator;
    return in;
}

Fraction& Fraction::operator= (const Fraction &fraction)
{
    // do the copy
    m_numerator = fraction.m_numerator;
    m_denominator = fraction.m_denominator;
 
    // return the existing object so we can chain this operator
    return *this;
}

Fraction clone(Fraction fract)
{
    return fract;
}



int main()
{
    // Fraction f6{Fraction{1,2}*Fraction{2, 3}* Fraction{3,4}}; //non-const references cannot bind to temporaries.
    // f6.print();

    // Fraction f7{0, 6};
    // f7.print();

    // Fraction f1{};
    // std::cout << "Enter fraction1: ";
    // std::cin >> f1;
    // Fraction f2{};
    // std::cout << "Enter fraction2: ";
    // std::cin >> f2;

    // std::cout << f1 << " * " << f2 << " is " << f1*f2 << '\n';
    Fraction f3(Fraction(3,4));
    std::cout << f3<<std::endl;
    Fraction* f4 = new Fraction(5,7);
    std::cout << *f4;
    Fraction f5 = f3;
    Fraction f6 = clone(f5); //first copies f5 to param and then whlie returning copy param to the return value
    delete f4;
}
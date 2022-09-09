#include <iostream>
 
class Cents
{
private:
	int m_cents;
 
public:
	Cents(int cents) { m_cents = cents; }
 
	// add Cents + Cents using a friend function
	friend Cents operator+(const Cents &c1, const Cents &c2);
	friend Cents operator-(const Cents &c1, const Cents &c2);
    friend std::ostream& operator<<(std::ostream& out, const Cents& cents);
    template<class T> //template parameter must be of numeric type only
    friend Cents operator+(const T& val1, const Cents& cents);
 
	int getCents() const { return m_cents; }
};
 
// note: this function is not a member function!
Cents operator+(const Cents &c1, const Cents &c2)
{
	// use the Cents constructor and operator+(int, int)
	// we can access m_cents directly because this is a friend function
	return Cents(c1.m_cents + c2.m_cents);
}
Cents operator-(const Cents &c1, const Cents &c2)
{
	// use the Cents constructor and operator+(int, int)
	// we can access m_cents directly because this is a friend function
	return Cents(c1.m_cents - c2.m_cents);
}

template<class T>
Cents operator+(const T& val, const Cents& c2)
{
    return Cents(static_cast<int>(val + c2.m_cents));
}

std::ostream& operator<<(std::ostream& out, const Cents& cents)
{
    out << "cents: " << cents.getCents() << std::endl;
    return out;
}
 
int main() 
{
	Cents cents1{ 6 };
	Cents cents2{ 8 };
	Cents centsSum{ cents1 + cents2 };
    Cents cents3{5};
    Cents cents4{20};

    std::cout << (5+ cents4).getCents() << std::endl;
    std::cout << (20.3 + cents4).getCents() << std::endl;
    std::cout << (12.5f + cents4).getCents() << std::endl;
    std::cout << ('c'+ cents3).getCents() << std::endl;
    std::cout << cents3;
	std::cout << "I have " << centsSum.getCents() << " cents.\n";
 
	return 0;
}
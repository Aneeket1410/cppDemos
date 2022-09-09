#include <iostream>
class Something
{
    private:
    int m_value;
    public:
    Something(int value): m_value{value}{};
    void setValue(int value) {m_value = value;}
    friend void reset(Something& something);
    friend bool isEqual(const Something& something, const Something& other);
};

void reset(Something& something)
{
    something.m_value = 0;
}

bool isEqual(const Something& something, const Something& other)
{
    return (something.m_value == other.m_value);
}

class Storage
{
private:
    int m_nValue;
    double m_dValue;
public:
    Storage(int nValue, double dValue)
    {
        m_nValue = nValue;
        m_dValue = dValue;
    }
 
    // Make the Display class a friend of Storage
    friend class Display;
};
 
class Display
{
private:
    bool m_displayIntFirst;
 
public:
    Display(bool displayIntFirst) { m_displayIntFirst = displayIntFirst; }
 
    void displayItem(const Storage &storage)
    {
        if (m_displayIntFirst)
            std::cout << storage.m_nValue << ' ' << storage.m_dValue << '\n';
        else // display double first
            std::cout << storage.m_dValue << ' ' << storage.m_nValue << '\n';
    }
};

int main()
{
    Something some1(10);
    some1.setValue(100);
    reset(some1);

    Something some2{10};
    std::cout << "Are some1 and some2 equal?\nPress enter to know: " ;
    std::cin.get();
    std::cout << (isEqual(some1, some2)? "Yes": "No") << std::endl;

    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

class Car
{
    private:
    std::string m_make;
    std::string m_model;
    public:
    Car() = default;
    Car(const std::string& make, const std::string& model): m_make{make}, m_model{model}{}

    friend std::ostream& operator<<(std::ostream& out, const Car& car)
    {
        out << "Car{" 
            << "Make: " << car.m_make << ", "
            << "Model: " << car.m_model
        << "}";

        return out;
    }

    friend bool operator<(const Car& car1, const Car& car2)
    {
        if (car1.m_make == car2.m_make)
        {
            return (car1.m_model < car2.m_model);
        }
        return (car1.m_make < car2.m_make);
    }

    friend bool operator==(const Car& car1, const Car& car2)
    {
        bool res = (car1.m_make == car2.m_make) && (car2.m_model == car2.m_model);
        return res;
    }

    friend bool operator!=(const Car& car1, const Car& car2)
    {
        bool res = !(car1 == car2);
        return res;
    }
};

int main()
{
    Car car1{std::string("Toyota"), std::string("Corolla")};
    Car car2{std::string("Lamborghini"), std::string("Galardo")};
    Car car3(std::string("Toyota"), std::string("Corolla"));

    std::cout << car1 << " != " << car2 
    << " results in: " << (car1!=car2? "True":"False") <<std::endl;

    std::cout << car1 << " == " << car3 
    << " results in: " << (car1==car3? "True":"False") <<std::endl;

    std::vector<Car> cars{
        car1, car2, {"Honda", "Civic"},
        {"Honda", "Accord"}, {"Toyota", "Camry"}
    };

    std::sort(cars.begin(), cars.end());
    std::cout << "sorted cars: " <<std::endl;
    for(auto car: cars)
    {
        std::cout << car <<std::endl;
    }

}
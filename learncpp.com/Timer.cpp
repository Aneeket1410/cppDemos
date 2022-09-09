#include <chrono> // for std::chrono functions
#include <iostream> 
#include <math.h>
#include <iomanip>
class Timer
{
private:
	// Type aliases to make accessing nested type easier
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;
	
	std::chrono::time_point<clock_t> m_beg;
 
public:
	Timer() : m_beg(clock_t::now())
	{
	}
	
	void reset()
	{
		m_beg = clock_t::now();
	}
	
    //returns ellapsed time as double value in seconds
	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};

int main()
{
    std::cout << std::setprecision(16);
    Timer timer{};
    int values[10] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << "elapsed to create array: " << timer.elapsed() <<std::endl;
    timer.reset();
    for (size_t i = 0; i < 10; i++)
    {
        // values[i] = pow(values[i], 2);
        values[i]*=values[i];
        std::cout << "elapsed: " << timer.elapsed() <<std::endl;
    }

    std::cout << "It took: "<<timer.elapsed()<<" secs to complete this program." <<std::endl;
    std::cin.get();
}
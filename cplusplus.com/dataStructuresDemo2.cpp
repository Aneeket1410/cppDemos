#include <iostream>

enum names {Aneeket, Rahul, Nitin, Gopinath, Mahesh, Ganesh};
enum months {Jan =1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
enum class days: char {Sun = 'S', Mon = 'M', Tue = 't', Wed = 'W', Thu = 'T', Fri = 'F', Sat = 's'};

int main(int argc, char const *argv[])
{
    names myName = Nitin;
    names newName;
    days day = days::Tue;
    std::cout << "Third name is: " << (names)myName;
    std::cout << "Third day is: " << (char)day;
    return 0;
}

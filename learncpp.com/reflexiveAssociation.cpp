#include <iostream>
#include <string>

class Course{
    private:
        std::string m_name;
        const Course* m_prerequisite;

    public:
        Course(const std::string& name, const Course* prerequisite = nullptr):
         m_name{name}, m_prerequisite{prerequisite}{}

};
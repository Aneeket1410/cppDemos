    #include <functional> //for reference_wrapper
    #include <iostream> 
    #include <string>
    #include <vector>

    class Patient;

    class Doctor{
        private:
            std::string m_name{};
            std::vector<std::reference_wrapper<const Patient>> m_patients{};
        public:
            Doctor(const std::string &name): m_name{name}{}

            //method to add patient
            void addPatient(Patient&); //not declaring arg as const because this function changes it

            friend std::ostream& operator << (std::ostream &out, const Doctor& doctor);

            const std::string& getName() const { return m_name;} //why const function: const object can only call const member functions
    };

    class Patient{
        private:
            std::string m_name;
            std::vector<std::reference_wrapper<const Doctor>> m_doctors{};

            void addDoctor(const Doctor& doctor){ 
                m_doctors.push_back(doctor);
            }
        public:
            Patient(const std::string& name): m_name{name}{}

            friend std::ostream& operator <<(std::ostream& out, const Patient& patient);
            
            const std::string& getName() const {return m_name;}

            //making Doctor::addPatient as a friend function so that it can access addDoctor 
            //and when addPatient method is called, it will have access to private member addDoctor
            friend void Doctor::addPatient(Patient&);
    };

    void Doctor::addPatient(Patient& patient){
        m_patients.push_back(patient); ////this function changes argument

        patient.addDoctor(*this); //addDoctor need object pointed by this as input
    }

    //overload to print doctor
    std::ostream& operator << (std::ostream &out, const Doctor& doctor){
        
        if (doctor.m_patients.empty()){
            out << doctor.m_name << " is not seeing any patient now.";
            return out;
        }
        out << doctor.m_name << " is seeing patients: ";
        for (auto &&patient : doctor.m_patients)
        {
            out << patient.get().getName() << ' ';
        }
        out << '.';
        return out;
        
    }
    //overload to print patient
    std::ostream& operator <<(std::ostream& out, const Patient& patient){
        
        if (patient.m_doctors.empty()){
            out << patient.m_name << " is not seeing any doctor now.";
            return out;
        }
        out << patient.m_name << " is seeing doctors: ";
        for (auto &&doc : patient.m_doctors)
        {
            out << doc.get().getName() << ' ';
        }
        out << '.';
        return out;
        
    }

    int main(int argc, char const *argv[])
    {
        Doctor manali{"Manali"};
        Doctor nisarg{"Nisarg"};

        Patient priyanka{"Priyanka"};
        Patient aneeket{"Aneeket"};
        Patient ankita{"Ankita"};

        manali.addPatient(priyanka);
        nisarg.addPatient(priyanka);
        nisarg.addPatient(aneeket);

        std::cout << manali << '\n';
        std::cout << nisarg << '\n';
        std::cout << aneeket << '\n';
        std::cout << priyanka << '\n';
        std::cout << ankita << '\n';

        return 0;
    }



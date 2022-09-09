// classes and default constructors
#include <iostream>
#include <string>
using namespace std;

class Example {
    string* ptr; //pointer defined
    public:
    Example (const string& str) : ptr(new string(str)) {}
    Example() {}
    //destructor
    ~Example(){delete ptr;}  
    //shallow copy constructor
    //refers to same data members pointing same memory for the object and copy object
    // Example( Example& x): data(x.data), ptr(x.ptr){}
    //Deep copy constructor
    Example( Example& x): ptr(new string(x.content())){}

    //access content returns reference to the string
    const string& content() const {return *ptr;} 
};


int main () {
  Example eg1;
  Example eg2 ("Example");
  eg1 = eg2;  //copy by assignment

  Example eg3 ("Example2"); 
  Example eg4 (eg2);  // copy object by copy constructor

  cout << "eg1's content: " << eg1.content() << '\n';
  cout << "eg2's content: " << eg2.content() << '\n';
  cout << "eg3's content: " << eg3.content() << '\n';
  cout << "eg4's content: " << eg4.content() << '\n';
  return 0;
}



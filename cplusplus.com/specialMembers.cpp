// classes and default constructors
#include <iostream>
#include <string>
using namespace std;

class Example {
    string data;
    public:
    Example (const string& str) : data(str) {}
    Example() {}
    Example( Example& x): data(x.content()){}

    //
    const string& content() const {return data;} //access
};


int main () {
  Example eg1;
  Example eg2 ("Example");
  eg1 = eg2;  //copy by assignment

  Example eg3 ("Example2"); 
  Example eg4 (eg2);  // copy object by copy constructor

  cout << "bar's content: " << eg1.content() << '\n';
  cout << "bar's content: " << eg2.content() << '\n';
  cout << "bar's content: " << eg3.content() << '\n';
  cout << "bar's content: " << eg4.content() << '\n';
  return 0;
}



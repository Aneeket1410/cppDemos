// exceptions
#include <iostream>
using namespace std;

int main () {
  try
  {
    throw 125;
  }
  catch (int e)
  {
    cout << "An exception occurred. Exception Nr. " << e << '\n';
  }
  return 0;
}


// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream myfile;
  myfile.open ("example.txt"); //opens file and clear contents before
  myfile << "Writing this to a file.\n";
  myfile << "This is another statement.\n";
  myfile.close();
  return 0;
}
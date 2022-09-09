#include <iostream>
using namespace std;

class Polygon{
    protected:
    int height, width;
    public:
    Polygon(){cout << "Polygon no parameters\n";};
    void set_values(int a, int b){
        height = a; width = b;
    } 
};

class Output {
  public:
    static void print (int i);
};

void Output::print (int i) {
  cout << i << '\n';
}


class Rectangle: public Polygon, public Output{
    public:
    Rectangle(){cout << "Rectangle no parameters\n";};//Default constructor with no arguments
    Rectangle(int a, int b){width = a; height = b;cout << "Rectangle int parameters\n";}
    int area(){
        return height*width;
    }
};
class Triangle: public Polygon, public Output{
    public:
    Triangle(){cout << "Triangle no parameters\n";}
    float area(){
        return height* (float)width/2;
    }
};

class Square: protected Rectangle{
    public:
    Square(int a){height = a ; width = a;cout << "Square int parameters\n";}
    int area(){ //override area method of rectangle class
        return height*width;
    }
};


// constructors and derived classes
class Mother {
  public:
    Mother ()
      { cout << "Mother: no parameters\n"; }
    Mother (int a)
      { cout << "Mother: int parameter\n"; }
};

class Daughter : public Mother {
  public:
    Daughter (int a)
      { cout << "Daughter: int parameter\n\n"; }
};

class Son : public Mother {
  public:
    Son (int a) : Mother (a)
      { cout << "Son: int parameter\n\n"; }
};

int main () {

    Polygon pl1;
    Rectangle rect1;

    Rectangle rect2(10, 20);

    Triangle tri;
    tri.set_values(5, 13);

    Square sq1(5);

    cout << rect2.area() << endl;
    rect2.print(rect2.area()); //multiple inheritance
    
    cout << tri.area()<< endl;
    cout <<sq1.area()<< endl;

    Daughter kelly(0);
    Son bud(0);

  return 0;
}
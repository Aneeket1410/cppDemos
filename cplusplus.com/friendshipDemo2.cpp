#include <iostream>

class Square;
class Rectangle {
    int height, width;
    public:
    int area(){
        return height*width;
    }
    void convert(Square);
};

class Square {
    friend class Rectangle;
    private:
    int side;
    public:
    Square(int a): side(a){};
};

void Rectangle::convert(Square s){
    height = s.side;
    width = s.side;
}

int main(int argc, char const *argv[])
{
    Rectangle rect;
    Square sqr(4);

    rect.convert(sqr);

    std::cout << rect.area();
    return 0;
}

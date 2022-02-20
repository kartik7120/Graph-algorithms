#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:
    //Rectangle (){}
    Rectangle (int x,int y): length(x),breadth(y){}
    int area()
    {
        return (length*breadth);
    }
    void convert(Square a);

};

class Square
{
    friend class Rectangle;
    private:
    int side;
    public :
    Square (int a):side(a){}
};

void Rectangle ::convert(Square a)
{
    width=a.side;
    height=a.side;
}

int main()
{
    Rectangle  rect;
    Square sqr (4);

    rect.convert(sqr);
    cout<<rect.area();
    return 0;
}
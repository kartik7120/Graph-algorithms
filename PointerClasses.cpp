#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:

    Rectangle(int x,int y) : length(x),breadth(y){};

    int cal_area()
    {
        return (length*breadth);
    }

};

class Square
{
    int side;
    public:

    Square (int s)
    {
        side=s;
    }

    int area()
    {
        return (side*side);
    }
};

int main()
{
    Rectangle obj(3,4);
    
    Rectangle * ptr;
    ptr=&obj;

    cout<<(*ptr).cal_area()<<endl;
    cout<<ptr->cal_area()<<endl;

    Square obj2(4);

    cout<<obj2.area()<<endl;

    return 0;
}
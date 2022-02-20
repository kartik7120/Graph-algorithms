#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:

    Rectangle(int ,int );

    int cal_area()
    {
        return length*breadth;
    }
};

//Rectangle :: Rectangle (int x,int y) :length(x){breadth=y;};

Rectangle :: Rectangle(int x,int y):length(x),breadth(y){};

int main()
{
    Rectangle obj1{10,20};
    cout<<obj1.cal_area()<<endl;
    return 0;
}
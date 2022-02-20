#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

    public :

    void set_area(int ,int );

    int rec_area()
    {
        return length*breadth;
    }
};

void Rectangle :: set_area(int x,int y)
{
    length=x;
    breadth=y;
};

int main()
{
    Rectangle obj1;
    Rectangle obj2;

    obj1.set_area(5,6);
    obj2.set_area(1,2);

    cout<<obj1.rec_area()<<endl;
    cout<<obj2.rec_area()<<endl;
    return 0;

}
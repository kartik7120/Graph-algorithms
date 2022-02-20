#include <iostream>
using namespace std;

class Polygon
{
protected:
    int length;
    int breadth;

    public:
    void set_values(int a,int b)
    {
        length=a;
        breadth=b;
    }
};

class Rectangle : public Polygon
{
    public:

    int area()
    {
        return length*breadth;
    }
};

class Triangle : public Polygon
{
    public:
    
    int area()
    {
        return (length*breadth/2);
    }
};

int main()
{
    Rectangle obj1;
    Triangle obj2;

    Polygon* ptr1=&obj1;
    Polygon* ptr2=&obj2;

    ptr1->set_values(4,4);
    ptr2->set_values(4,4);

    cout<<obj1.area()<<endl;
    cout<<obj2.area()<<endl;
    return 0;
}
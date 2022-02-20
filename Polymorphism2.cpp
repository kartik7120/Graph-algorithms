#include<iostream>
using namespace std;

class Polygon
{
    protected:
    int length;
    int breadth;
    public:
    void set_values(int l,int b)
    {
        length=l;
        breadth=b;
    }

    virtual int area()
    {
        return 0;
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
        return length*breadth/2;
    }
};

int main()
{
    Rectangle rec;
    Triangle tri;
    Polygon poly;

    Polygon* obj1=&rec;
    Polygon* obj2=&tri;
    Polygon* obj3=&poly;

    obj1->set_values(1,2);
    obj2->set_values(2,4);
    obj3->set_values(6,7);
    cout<<obj1->area()<<endl;
    cout<<obj2->area()<<endl;
    cout<<obj3->area()<<endl;

    return 0;
}
#include<iostream>
using namespace std;

class Polygon
{
    protected :
    int length ;
    int breadth;
    public:
    void set_values(int l,int b)
    {
        length=l;
        breadth=b;
    }

    virtual int area()=0; // pure virtual functions
};

class Rectangle : public Polygon
{
    public:
    int area()
    {
        return length*breadth;
    }
};

class Triangle: public Polygon
{
    public:

    int area()
    {
        return (length*breadth/2);
    }
};

int main()
{
    Rectangle rec;
    Triangle tri;

    Polygon* obj1=&rec;
    Polygon* obj2=&tri;

    obj1->set_values(1,2);
    obj2->set_values(4,5);

    cout<<obj1->area()<<endl;
    cout<<obj2->area()<<endl;

   return 0;
}
#include<iostream>
using namespace std;

class Polygon
{
    protected:
    int length;
    int breadth;

    public:

    void get_val(int x,int y)
    {
        length=x;
        breadth=y;
    }

};

class Rectangle : public Polygon
{
    public :
    int area()
    {
        return (length*breadth);
    }
};

class Triangle : public Polygon
{
    public  :
    int area()
    {
        return (length*breadth/2);
    }
};

int main()
{
    Rectangle obj;
    Triangle obj2;

    obj.get_val(2,3);
    obj2.get_val(2,3);

    cout<<obj.area()<<endl;
    cout<<obj2.area()<<endl;
    return 0;

}
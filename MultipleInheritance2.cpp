#include<iostream>
using namespace std;

class Polygon
{
    protected :
    int length;
    int breadth;
    public:
    Polygon(int a,int b) : length(a),breadth(b){}
};

class Output
{
    public:
    static void print(int i);
};

void Output ::print(int i)
{
    cout<<i<<'\n';
}

class Rectangle : public Polygon ,public Output
{
    public :
    Rectangle (int a,int b) : Polygon(a,b) {}
    int area()
    {
        return (length*breadth);
    }
};

class Triangle : public Polygon,public Output
{
    public :
    Triangle (int a,int b) : Polygon(a,b){}
    int area()
    {
        return (length*breadth/2);
    }
};

int main()
{
    Rectangle obj(4,5);
    Triangle obj2(4,5);
    obj.print(obj.area());
    Triangle :: print(obj2.area());
    return 0;
}
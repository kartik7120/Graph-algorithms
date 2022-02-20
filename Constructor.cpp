#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public :
    Rectangle() // default constructor
    {
        length=0;
        breadth=0;
    }

    int cal_area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle obj1;

    cout<<obj1.cal_area()<<endl;
    return 0;
}
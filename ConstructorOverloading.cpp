#include<iostream>
using namespace std;

class Rectangle
{
    int length ;
    int breadth;

    public:
    Rectangle();
    Rectangle(int ,int);

    int cal_area()
    {
        return length*breadth;
    }
};

Rectangle :: Rectangle ()
{
    length =0;
    breadth=0;
}

Rectangle :: Rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

int main()
{
    
    Rectangle obj1(3,4);
    Rectangle obj2;
  //  obj1.Rectangle(3,4);
    cout<<obj1.cal_area()<<endl;
    return 0;
}

//Rectangle rectb;   // ok, default constructor called
//Rectangle rectc(); // oops, default constructor NOT called 

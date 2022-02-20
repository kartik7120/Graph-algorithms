#include <iostream>
using namespace std;

class Rectangle
{
    int length ;
    int breadth;
    public :
    Rectangle();
    Rectangle(int ,int);

    int cal_area(){
        return length*breadth;
    }
};

Rectangle :: Rectangle()
{
    length=0;
    breadth=0;
}

int main()
{
    Rectangle obj {10,20};

    cout<<obj.cal_area()<<endl;
    return 0;
}
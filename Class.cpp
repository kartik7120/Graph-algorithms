#include <iostream>
using namespace std;

class rectangle
{
    int length; // length and breadth are private members as all members without the specifier are private by default
    int breadth;

    public :
    void get_value(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area(void)
    {
        return (length*breadth);
    }
}rect;

int main()
{
    rect.get_value(1,2);
    cout<<rect.area()<<endl;
    return 0;
}
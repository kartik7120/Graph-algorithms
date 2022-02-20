#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:

    Rectangle() : length(10), breadth(20) {}

    int cal()
    {
        return length*breadth;
    }
    const int cal() const
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle obj;
  const  Rectangle obj2;
   const Rectangle *ptr;
    ptr=&obj2;

    cout<<obj.cal()<<endl;
    cout<<ptr->cal()<<endl;
    return 0;
}
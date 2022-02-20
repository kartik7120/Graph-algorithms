#include<iostream>
using namespace std;

class Rectangle
{
    int length;
    int breadth;
    public:

    Rectangle ()
    {
        length=0;
        breadth=0;
    }
   // void set(int l,int b)
   // {
   //     length=l;
   //     breadth=b;
   // }
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return (length*breadth);
    }
};

int main()
{
    Rectangle obj;
   // obj(3,4);

    Rectangle obj2(4,4);

    Rectangle * ptr;
    ptr=&obj;

    cout<<ptr->area()<<endl;
    cout<<(*ptr).area()<<endl;
    Rectangle *ptr2;
    ptr2=new Rectangle(3,3);

    cout<<ptr2->area()<<endl;

    Rectangle *ptr3;
    ptr3=new Rectangle[2]{{2,0},{7,9}};
    cout<<ptr3[0].area()<<endl;
    cout<<ptr3[1].area()<<endl;
    cout<<ptr3->area()<<endl;

    delete ptr2;
    delete[] ptr3;
    ptr2=nullptr;
    ptr3=nullptr;
    return 0;
}
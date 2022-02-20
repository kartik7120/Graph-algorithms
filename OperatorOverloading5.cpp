#include<iostream>
using namespace std;

class Test
{
    int num;
    public :
    Test()
    {
        num=5;
    }

   //void operator <<();
   ////{
   ////    cout<<num<<1<<2<<3<<endl;
   ////}
};

Test operator << (obj)
{
    cout<<num<<1<<2<<3<<endl;
}

int main()
{
    Test obj;
    cout<<"2";
    return 0;
}
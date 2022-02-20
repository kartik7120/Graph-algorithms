#include <iostream>
using namespace std;

template <class T>
class mypair
{
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }
    T getmax();
};



template <class T>
T mypair<T>::getmax()
{
   
   T maximum;

    maximum =a>b?a:b;
    return maximum;
}

int main()
{
    mypair<int> obj(30,40);
    cout<<obj.getmax();
    return 0;
}
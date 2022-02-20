#include <iostream>
using namespace std;

template <class T>
class myclass
{
    T element;

public:
    myclass(T arg) : element(arg) {}

    T increase()
    {
        return ++element;
    }

    T decrease();
};

template <class T>
T myclass<T>::decrease()
{
    return --element;
}

//Class template Specialization
template <>
class mycontainer<int>
{
    int element;

public:
    mycontainer(int ele)
    {
        element = ele;
    }
    int print()
    {
        return element;
    }
};

int main()
{
    myclass<int> obj(7);
    cout << obj.decrease() << endl;
    mycontainer<int> obj2(5);
    cout << obj2.print() << endl;
    return 0;
}
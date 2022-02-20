#include <iostream>
using namespace std;


template <class T>
class mypair {
    T values [2];
  public:
    mypair (T first, T second)
    {
      values[0]=first; values[1]=second;
    }
};

int main()
{
    mypair<int> myobject (115, 36);
    mypair<double> obj(3.0,15.3);


     return 0;
}
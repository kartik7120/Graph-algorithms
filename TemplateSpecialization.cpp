#include <iostream>
using namespace std;

template <class T>
class myclass
{
    T value;

public:
    myclass(T arg) { value = arg; }

    T increase()
    {
        return ++value;
    }
};
// Template specilization
//template <>

// class template specialization:
template <>
class mycontainer <char> {

    char element;
  public:
    mycontainer (char arg) {element=arg;}
    char uppercase ()
    {
      if ((element>='a')&&(element<='z'))
      element+='A'-'a';
      return element;
    }
};


int main()
{
    myclass<int> obj1(7);
    mycontainer <char> obj2('a');
    cout<<obj1.increase()<<endl;
    cout<<obj2.uppercase()<<endl;
    return 0;
}
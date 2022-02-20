#include<iostream>
using namespace std;

class base{};
class derived
{
    public:
    derived(const derived &e)
    {
        cout<<"Conversion constructor called";
    }
};

int main()
{
    try
    {
        base obj;
        throw obj;
    }
    catch(derived e2)
    {
        cout<<"Caught derived"<<endl;
    }
    catch(...)
    {
        cout<<"Default catch block"<<endl;
    }
    return 0;
}
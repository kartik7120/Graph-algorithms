#include<iostream>
using namespace std;

class Mother
{
    public :
    Mother()
    {
        cout<<"Mother :  no paramatre\n";
    }
    Mother (int a)
    {
        cout<<"Mother : int parametre\n";
    }
};

class Daughter : public Mother
{
    public :
    Daughter (int a)
    {
        cout<<"Daughter : int parametre\n";
    }
};

class Son : public Mother{
    public :
    Son(int a) : Mother(a)
    {
        cout<<"Son : int parametre\n\n";
    }
};

int main()
{
    Daughter obj (0);
    Son obj2(0);
    return 0;
}
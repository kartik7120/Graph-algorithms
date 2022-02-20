#include<iostream>
using namespace std;
// Destructors are called when a object is destroyed and we make a destructor using a ~ sign
class student
{
    public:
    student()
    {
        cout<<"Default Constructor\n";
    }
    ~student()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    student a;
    student b;
    return 0;
}
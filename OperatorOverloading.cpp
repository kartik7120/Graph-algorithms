#include<iostream>
using namespace std;

// operator overloading means that we are changing the behaviour of a operator 

class student
{
    public:
    string name;
    int age;

    student(string s,int a)
    {
        name=s;
        age=a;
    }

    bool operator == student(&a)
    {
        if(name=a.name && age = a.age )
        return true;
        else
        return false;
    }


}

int main()
{
    student a("Sam",20);
    student b("Sam",20);
    if(a==b)
    cout<<"Same"<<endl;
    else
    cout<<"NOT same"<<endl;
    return 0;
    
}
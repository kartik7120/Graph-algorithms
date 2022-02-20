#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    // A default constructor is automatically called if no other constructors like a parameterized constructor is made or executed

    student() // if no parameters are passed then it is known as default constructor
    {
        cout<<"I am a Default constructor"<<endl;
    }

/*
    student (string name,int age)
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
    */
};

int main()
{
    student a; // calling the default constructor
   // student b("aa",2);
    return 0;
}
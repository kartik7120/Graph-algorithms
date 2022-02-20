#include<iostream>
using namespace std;

class student 
{
    public:
    string name;
    int age;

    student(student &a) // This is a decleared constructor while there is also a default copy constructor
    {
        cout<<"Copy Constructor";
    }

    student(string name,int age)
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
    
};

int main()
{
    student a("kaartik",18);
    student c=a; // we can also declare it as student c(a)
    return 0;
}
#include <iostream>
using namespace std;

class student
{
public: // we mentioned the public specifier so that we are able to access the members of the class student as by default they are private
    string name;
    int age;
    string gender;

    void printInfo()
    {
        cout<<"Name :-\n";
        cout<<name<<endl;
        cout<<"Age :-\n";
        cout<<age<<endl;
        cout<<"Gender :-\n";
        cout<<gender<<endl;
    }
};

int main()
{
    //Rather that defining multiple objects for diffrent students we can create a array of objects and that array will be of class type student

    student arr[2]; // we are creating two objects for two students

    for(int i=0;i<2;i++)
    {
        cout<<"Enter the name\n";
        cin>>arr[i].name;
        cout<<"Enter the age\n";
        cin>>arr[i].age;
        cout<<"Enter the gender\n";
        cin>>arr[i].gender;
    }

    //If we want to print the elements of a particular object then we can create a print function in the class student and 
    // all the values will be printed regarding the object that is being referenced

    for(int i=0;i<2;i++)
    {
        arr[i].printInfo();
    }







    /*
    student a;      // a is an object which is used to access the members of a class
    a.name = "Tim"; // without using the public specifier we will not be able to access the class members as they are private by default
    a.age = 19;
    a.gender = "M";

    student b; // we can create as many objects as we want 
    b.name = "kartik";
    b.age = 18;
    b.gender = "M";
    */


    return 0;
}
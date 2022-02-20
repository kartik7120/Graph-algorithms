#include <iostream>
using namespace std;

class student
{
public: // we mentioned the public specifier so that we are able to access the members of the class student as by default they are private
    string name;
    int age;
    string gender;
};

int main()
{

    student a;      // a is an object which is used to access the members of a class
    a.name = "Tim"; // without using the public specifier we will not be able to access the class members as they are private by default
    a.age = 19;
    a.gender = "M";

    student b; // we can create as many objects as we want 
    b.name = "kartik";
    b.age = 18;
    b.gender = "M";


    return 0;
}
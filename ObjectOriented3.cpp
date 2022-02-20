#include<iostream>
using namespace std;
// Getters and Setters

class student
{
    string name;
    public:
    // since all the members of the class are private by default thus if we want to access them outside the class without using 
    //public access specifier then we can create a Setter function

    void Setstring(string s)
    {
        s=name;
    }
};

int main()
{
    student a;
    
    string str;
    getline(cin,str);
    a.Setstring(str);

    return 0;

}
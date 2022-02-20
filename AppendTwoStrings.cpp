#include<iostream>
#include<string>
using namespace std;
// meathod to append two strings
int main()
{
    string s1="fam";
    string s2="ily";

    //s1.append(s2);//used to append(join) string s1 and s2 without spaces (assuming that there is no space present in either of the string)
    //cout<<s1<<endl;
    // 2nd meathod (will just two string without appending one other and s1 and s2 will remain same i.e. "fam" and "ily" resprectivily)
    cout<<s1+s2<<endl;
    return 0;
}
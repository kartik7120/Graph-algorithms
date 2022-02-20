#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="CoMpUtEr";
    

    string newstr="";
    // convert string to lower case
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        str[i]-=32;
        
    }
    cout<<str<<endl;
    // convert string to upper case
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        str[i]+=32;
    }
    cout<<str<<'\n';
    return 0;
}
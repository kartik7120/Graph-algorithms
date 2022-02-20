#include<iostream>
#include<string>
using namespace  std;

int main()
{
    string str;
    string n;
    cin>>n;

    for(int i=0;i<n.length();i++)
    {
        if(n[i]=='1')
        str=str+"0";
        else
        if(n[i]=='0')
        str=str+"1";

    }
    int a=stoi(str);
    
    cout<<a<<endl;
    return 0;
}
#include<iostream>
using namespace std;
string s1="";string s2="";
string MoveAllX(string str)
{
    if(str.length()==0)
    return "";
    if(str[0]!='x')
    {
        s1=s1+str[0];
    }
    else
    s2=s2+str[0];
    MoveAllX(str.substr(1));
    return s1+s2;

}

int main()
{
    string str;

    getline(cin,str);
    string ans=MoveAllX(str);
    cout<<ans<<endl;
    return 0;
}
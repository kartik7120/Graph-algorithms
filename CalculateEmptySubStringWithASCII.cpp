#include<iostream>
#include<string>
using namespace std;

void substring(string str,string ans)
{
    if(str.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch=str[0];
    string ros=str.substr(1);
    substring(ros,ans);
    substring(ros,ans+ch);
    substring(ros,(ans)+to_string((int)ch));
}

int main()
{
    string str;
    getline(cin,str);
    substring(str,"");
    return 0;
}
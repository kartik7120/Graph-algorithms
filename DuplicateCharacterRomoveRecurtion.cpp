#include<iostream>
#include<string>
using namespace std;

void RemoveDuplicate(string str)
{
    if(str.length()==0)
    return ;
    if(str[0]!=str[1])
    {
        cout<<str[0];
    }
    RemoveDuplicate(str.substr(1));

}

int main()
{
    string str;
    getline(cin,str);
    RemoveDuplicate(str);
    return 0;
}
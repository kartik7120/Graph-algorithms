#include<iostream>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string ans;
    
    for(int i=1;i<s.length();i++)
    {
        if(s[i-1]!=s[i])
        ans=ans+s[i-1];
    }
    cout<<ans<<endl;
    //if(ans=="hackerrank")
    //return "YES";
    //else 
    //return "NO";
    return 0;
}
#include<iostream>
#include<string>

#include<cmath>
using namespace std;

int main()
{
    string q;
    cin>>q;
    int X=stoi(q);
    q="";
        for(long long i=X;i>0;i=i/2)
        {
            int rem=i%2;
            q=q+to_string(rem);
        }
       int left=32-q.length();string bin;
       for(int i=1;i<=left;i++)
       bin=bin+"0";
       bin=bin+q;
       string str="";
       
       str=bin+str;
       bin="";
       for(int i=0;i<str.length();i++)
       {
           bin=str[i]+bin;
       }
       int c=0;
       
       long long newnumber=stoi(bin);long long ans=0;
       for(long long i=newnumber;i>0;i=i/2)
       {
           int rem=i%2;
           ans=ans+rem*pow(2,c);
           c++;
       }
       cout<<ans<<endl;
       
       
        return 0;
}
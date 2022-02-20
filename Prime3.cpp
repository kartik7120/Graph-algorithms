#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   int n;
   cout<<"Enter the number\n";
   cin>>n;
   bool flag=false;
   for(int i=2;i<sqrt(n);i++)
   {
       if(n%i==0)
       {
           flag=true;
       
       cout<<"Non-prime\n";
       break;
       }
   }
       if(flag==false)
       cout<<"Prime\n";
       return 0;
}
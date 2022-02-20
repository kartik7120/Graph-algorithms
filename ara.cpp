#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
     long long n;
     cin>>n;int rem=0;
     string q;long long sum=0;
     for(long long i=n;i>0;i=i/10)
     {
        rem=i%10;
        q=q+to_string(rem);
     }
    int newnumber=stoi(q);
     int arr[32]={0};int c=0;
     for(int i=newnumber;i>0;i=i/10)
     {
         rem=i%10;
         arr[c]=rem;
         c++;
     }
     for(int i=arr[32-(c+1)];i>0;i=i/2)
     {
         rem=i%2;
         sum=sum+rem*pow(2,c);
         c++;

     }
     cout<<sum<<endl;
     return 0;
}
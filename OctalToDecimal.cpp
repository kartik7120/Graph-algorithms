#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the valur of n\n";
    cin>>n;
    int fact=1;int c=0;
    int i=0;double sum=0;
    for(int i=n;i>0;i=i/10)
    {
       int rem=i%10;
       sum=sum+rem*(pow (8,c));
       c++;
    }

    cout<<sum<<endl;
    return 0;
}
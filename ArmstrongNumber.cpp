#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number\n";
    cin>>n;
    int sum=0;
    for(int i=n;i>0;i=i/10)
    {
        int lastdigit=i%10;
        sum+=(lastdigit*lastdigit*lastdigit);
    }
    if(sum==n)
    cout<<"Armstrong number";
    else
    cout<<"Not an armstrong number";
return 0;
}
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;int diff1=0;int power=0;
    for(int i=0;i<sqrt(n);i++)
    {
       
        int number=pow(16,i);
        if(number<n)
        {
            diff1=number;
            power=i;
        }
        
    }int p=pow(16,power);int sum=0;
    int cofficient =n/diff1;
    for(int i=power;i>=0;i--)
    {
        if(i!=power)
        {
            p=pow(16,i);
            cofficient=n-sum;
        }
    sum+=(cofficient*p);
    }
    cout<<sum<<endl;
    return 0;
}
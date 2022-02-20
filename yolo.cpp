#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
    long long X;
    cin>>X;
    string n;
        int rem=0; long long i=0;long long sum=0;
        for(i=X;i>0;i=i/2)
        {
            rem=i%2;
            n=n+to_string(rem);
        }
        int c=32-n.length();
        int arr[32];
        for(int i=0;i<c;i++)
        arr[i]=0;
        int bin=stoi(n);
        
        for(i=bin;i>0;i=i/10)
        {
            rem=i%10;
            arr[c]=rem;
            c--;

        }
        for(i=0;i<=c;i++)
        {
           sum=sum+arr[c]*pow(2,i);
           c--;
        }
        cout<<sum;
        return 0;
}
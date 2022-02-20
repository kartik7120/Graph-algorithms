#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;int d=0;int e=0;
    int sum=0;
    int finalsum=0;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=((n)*(n+1))/2;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
        finalsum=max(finalsum,sum);
        if(i==(n-1))
        {
            d++;
            i=d;
            sum=0;
        }
        e++;
        if(e==c)
        break;

    }
    cout<<finalsum<<endl;
    return 0;
}
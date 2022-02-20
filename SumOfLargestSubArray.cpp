#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];int s=0;
    cout<<"Enter the total sum\n";
    cin>>s;
    int st=0;
    int en=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {

        sum=sum+arr[en];
        en++;
        if(sum>s)
        break;

    }
    for(int i=0;i<n;i++)
    {
        sum=sum-arr[st];
        st++;
        if(sum==s)
        break;
    }
    cout<<st<<" "<<en-1<<endl;
    return 0;
}
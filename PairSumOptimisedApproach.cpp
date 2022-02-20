#include<iostream>
using namespace std;
// check will only work if the array is sorted if not then apply the sorting algorithm and sort the array in asending order
bool check(int arr[],int n,int sumU)
{
    int sum=0;int st=0;int en=n-1;// st and en are pointers for start and end of the array
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[st]+arr[en];
        if(sum<sumU)
        {
        st++;
        sum=0;
        }
        else
        if(sum>sumU)
        {
        en--;
        sum=0;
        }
        if(sum==sumU)
        {
                cout<<st<<" "<<en<<endl;
                return true;
        }
        
    }
    return false;
}

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;
    int arr[n];
    cout<<"ENter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sumUser=0;
    cout<<"Enter the sum to be checked\n";
    cin>>sumUser;

    bool ans=check(arr,n,sumUser);
    if(ans==1)
    cout<<"Found"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}
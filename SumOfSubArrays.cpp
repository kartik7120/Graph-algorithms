#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Ennter the length of the array\n";
    cin>>n;
    int arr[n];// no of sub arrays that will be formed -> nC2 + n
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
    cout<<sum<<endl;
        }
    }
    return 0;
}
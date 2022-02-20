#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the length of row of the array\n";
    cin>>m;
    int n;
    cout<<"Enter the length of the column of the array\n";
    cin>>n;
    cout<<"Enter the elements of the array\n";
    int arr[m][n];
    for(int i=0;i<m;i++) //taking input from the user
    {
         for(int j=0;j<n;j++)
         {
             cin>>arr[i][j];
         }
    }

    for(int i=0;i<m;i++) //printing the 2d array
    {
         for(int j=0;j<n;j++)
         {
             cout<<arr[i][j]<<" ";
         }
         cout<<endl;
    }
    return 0;
}
//SearchinAnElementIn2DArray
#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the length of row of the array\n";
    cin>>m;
    int n;
    cout<<"Enter the length of the column oof the array\n";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the elements of thr array\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element to be found\n";
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==x)
            {cout<<"Number found\n";
            break;
            }
        
        }
    }
        return 0;

}
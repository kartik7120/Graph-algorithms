#include<iostream>
using namespace std;

int main()
{
    int m1,n1;
    cout<<"Emter the row and column of the first matrix\n";
    cin>>m1>>n1;
    int arr[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr[i][j];
        }
    }
    int n2,m2;
    cout<<"Emter the row and column of the second matrix\n";
    cin>>m2>>n2;

    int arr2[m2][n2];
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr2[i][j];
        }
    }

    if(n1==m2)
    {
        int arr3[m1][n2];
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            arr3[i][j]=0;
            
        }
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                for(int k=0;k<n2;k++)
                {
                    arr3[i][j]+=arr[i][k]*arr2[k][j];

                }
            }
        }
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
                cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
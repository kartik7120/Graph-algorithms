#include<iostream>
using namespace std;


int main()
{
    int m;
    cout<<"Enter the length of the row of array\n";
    cin>>m;
    int n;
    cout<<"Enter the length of the column of array\n";
    cin>>n;

    int arr[m][n];
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }

    int row_start=0;int column_start=0;
    int row_end=n-1;  int column_end=n-1;

    while(row_start<=row_end||column_start<=column_end)
    {
        // for first row
        for(int col=column_start;col<=column_end;col++)
        {
            cout<<arr[row_start][col]<<" ";
        }
        row_start++;
        // for last column
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<arr[row][column_end]<<" ";
        }
        column_end--;

        //for last row
        for(int col=column_end;col>=column_start;col--)
        {
            cout<<arr[row_end][col]<<" ";
        }
        row_end--;

        //for first column
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<arr[row][column_start]<<" ";
        }
        column_start++;
    }
    return 0;
}   
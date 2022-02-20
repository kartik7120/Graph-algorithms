#include<iostream>
using namespace std;
// file:///C:/Users/Asus/Downloads/9.2%20Notes%202DArray%20Challenges_watermark.pdf
int main()
{
    int m,n;
    cout<<"Enter the dimensions of the array\n";
    cin>>m>>n;

    int arr[m][n];
    cout<<"Enter the elements of the array\n";

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target=0;
    cout<<"ENter the number to be found\n";
    cin>>target;
    bool result=false;
    int r=0;//start point of the array
    int c=m-1;//end point of the array
    for(int i=r;i<=c;i++)
    {
        if(arr[r][c]==target)
        {
            result=true;
            break;
        }
        else
        if(arr[r][c]>target)
        c--;
        else
        r++;
    }
    if(result)
    cout<<"Number found"<<endl;
    else
    cout<<"Number not found\n";
    return 0;
}
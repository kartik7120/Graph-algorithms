#include<iostream>
using namespace std;

void TowerOfHanoi(int arr[][],int n)
{
    int st=0;int en=n-1;
    
    
}

int main()
{
    int n;
    cout<<"Entre the number of discs\n";
    cin>>n;
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            arr[i][j]=0;
        }
    }
    int discnum=1;
    for(int i=0;i<n;i++)
    {
        arr[i][0]=discnum;
        discnum++;
    }
    TowerOfHanoi(arr,n);
    return 0;
}
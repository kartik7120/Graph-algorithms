#include<iostream>
using namespace std;
//Half Pyramid Using Numbers pattern
/*
1
22
333
4444
55555
*/
int main()
{
    int row;int column;
    cout<<"Enter the number of rows\n";
    cin>>row;
    cout<<"Enter the number of columns\n";
    cin>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
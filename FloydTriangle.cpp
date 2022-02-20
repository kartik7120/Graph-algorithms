#include<iostream>
using namespace std;
// Floyd Triangle pattern
/*
1
2 3
4 5 6 
7 8 9 10
11 12 13 14 15
*/
int main()
{
    int row;int column;
    cout<<"Enter the number of rows\n";
    cin>>row;
    cout<<"Enter the number of column\n";
    cin>>column;
    int c=1;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<c<<" ";
            c++;
        }
    cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
//0-1 patttern
/*
1 
0 1  
1 0 1 
0 1 0 1
1 0 1 0 1
*/
int main()
{
    int row; int column;

    cout<<"Enter the number of rows :-\n";
    cin>>row;
    cout<<"Enter the number of columns:- \n";
    cin>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            cout<<"1 ";
            else
            cout<<"0 ";
        }
        cout<<endl;
    }
    return 0;
}
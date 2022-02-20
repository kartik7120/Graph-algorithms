#include<iostream>
using namespace std;
//Rectangular pattern question
/*
**** 
****
****
****
****
*/
int main()
{
    int row;
    int column;
    cout<<"Enter the row :-"<<endl;
    cin>>row;
    cout<<"Enter the no of columns :-"<<endl;
    cin>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=column;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
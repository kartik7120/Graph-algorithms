#include<iostream>
using namespace std;

int main()
{
    int row;int col;
    cin>>row;
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int row;int column;
    cin>>row>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=column;j>=i;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
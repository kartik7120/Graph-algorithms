#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=5;i++)
    {
        int j;
        for(j=1;j<=5;j++)
        {
        if(i==3)
        break;
        }
        if(j==3)
        cout<<"Hello1\n";
    }
    cout<<"Hello\n";
    return 0;
}
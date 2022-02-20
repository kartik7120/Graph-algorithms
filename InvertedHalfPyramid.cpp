#include<iostream>
using namespace std;
//Inverted Half Pyramid
/*
11111
2222
333
44
5
*/
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<i;
        }
        cout<<endl;

    }
    return 0;
}
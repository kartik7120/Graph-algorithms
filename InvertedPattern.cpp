#include<iostream>
using namespace std;
// Inverted pattern
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
int main()
{
    int row;int column;
    cout<<"Enter the no of rowws :-\n";
    cin>>row;
    cout<<"Enter the no of columns :-\n";
    cin>>column;

    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
/*
#include <iostream>
using namespace std;

int main()
{
    int n;// no of rows is equal to number of columns
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n+1)-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
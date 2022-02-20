#include<iostream>
using namespace std;
// Nutterfly pattern
/*
               
*              *
* *          * *
* * *      * * *
* * * *  * * * *
* * * *  * * * *
* * *      * * *
* *          * *
*              *
               
*/   
 
int main()
{
    int row;int column;
    cout<<"Enter number of rows\n";
    cin>>row;
    cout<<"Enter number of columns\n";
    cin>>column;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*row-2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    for(int i=row;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        int space=2*row-2*i;
        for(int j=1;j<=space;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    return 0;
}
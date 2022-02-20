#include<iostream>
using namespace std;

//Pascal's Triangle
/*
1
1   1
1   2   1
1   3   3   1
1   4   6   4   1
 */
int fact(int n1)
{
    int fact=1;
    while(n1>0)
    {
        fact=fact*n1;
        n1--;
    }
    return fact;
}

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<(fact(i)/(fact(j)*fact(i-j)))<<" ";
        }
        cout<<endl;
    }
    return 0;
}
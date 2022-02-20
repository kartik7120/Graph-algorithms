#include<iostream>
using namespace std;
// Half pyramid after 180 degree rotation
/*
        *
      * *
    * * *
  * * * *
* * * * *
*/ 
int main()
{
    int row;
    int col;//columm
    cin>>row>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=col;j>=i;j--)
        {
            if(j!=i)
            cout<<" ";
            else
            {
                for(int k=1;k<=j;k++)
                {
                    cout<<"*";
                }
            }
        }
        cout<<endl;
    }
    return 0;

}
/*
Apni Kaksha meathod

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=(n-1))
            cout<<" ";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
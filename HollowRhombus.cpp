#include<iostream>
using namespace std;
//Hollow Rhomnus
/*
    * * * *
   *     *
  *     *
 * * * *   
 */
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        
        int j;
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        
        for(int x=1;x<=n;x++)
        {

            if(i!=1&&i!=n)
            {
                if(x<n&&x>1)
                {
                    cout<<"  ";
                }
                else
                cout<<"* ";
            }
            else
            cout<<"* ";
        
        }
        cout<<endl;
    }
    return 0;
}
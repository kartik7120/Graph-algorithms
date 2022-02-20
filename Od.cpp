#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        if(i%2==0){
            i++;
        continue;
        }
        else
        {
        cout<<i<<endl;
        
        }
        i++;
        
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    
    float pos=0;float neg=0;float zero=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        zero++;
        else 
        if(arr[i]>0)
        pos++;
        else
        neg++;
    }
        pos=pos/n;neg=neg/n;zero=zero/n;
        cout<<pos<<endl<<neg<<endl<<zero<<endl;
        return 0;
        
        
    }
#include<iostream>
using namespace std;
int maxvalue=0;
int thief(int item[],int weight[],int W,int n)
{
    if(n==0||W==0)
    return 0;

    if(weight[n-1]<W)
    return thief(item,weight,W,n);
    
     return  max(thief(item,weight,W-weight[n-1],n-1)+item[n-1],thief(item,weight,W,n));
}

int main()
{
    int n;
    cout<<"Enter the number of items";
    cin>>n;
    int W;
    cout<<"Enter the weight of knapsack\n";
    cin>>W;
    int item[n];
    cout<<"Enter the value of items\n";
    for(int i=0;i<n;i++)
    cin>>item[i];

    int weight[n];
    cout<<"Enter the weight of each item\n";
    for(int i=0;i<n;i++)
    cin>>weight[i];
    cout<<"Enter the weight of the knapsack\n";
    

   int ans= thief(item,weight,W,n);
   cout<<ans<<endl;
    return 0;
}
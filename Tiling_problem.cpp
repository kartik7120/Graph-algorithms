#include<iostream>
using namespace std;

int title(int n)
{
    if(n==0)
    return 0;
    if(n==1)
    return 1;

    int totalways = title(n-1)+title(n-2);
    return totalways;
}

int main()
{
    int n;
    cout<<"Enter the number of columns of tile wall"<<'\n';
    cin>>n;

   int ans= title(n);
   cout<<ans<<endl;
    return 0;
}
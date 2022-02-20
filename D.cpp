#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a NUMBER\n";
    cin>>n;
    for(int i=n;i>0;i=i/10){
        int rem=i%10;
        cout<<rem<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int main()
{

    int n=0;
    cout<<"Enter the value of n\n";
    cin>>n;
    int fact=1;
    for(int i=1;i<=10;++i)
    {
        cout<<i<<" "<<i*n<<endl;
    }
    return 0;
}
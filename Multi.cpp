#include<iostream>
using namespace std;

int main()

{
    int n;
    cout<<"Enter the value of n\n";
    cin>>n;
    int i=1;
    while(i<=10)
    {
        cout<<i<<" "<<i*n<<endl;
        i++;
    }
    return 0;

}
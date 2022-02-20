#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,c=0;int decinum=0;
    cout<<"Enyter the number\n";
    cin>>n;
    for(int i=n;i>0;i=i/10)
    {

        int  rem=i%10;
        decinum=decinum+rem*(pow(2,c));
        c++;
    }
    cout<<decinum<<endl;
    return 0;
}
#include <iostream>
using namespace std;

int GCD(int a,int b)
{
    int divide=a%b;int GCD=0;int temp1=0; int temp2=0;
    while(divide!=0)
    {          //  18          24
         temp1=divide;temp2=b; //we can also take a
        divide=b%temp1;
        GCD=temp1;
    }
    return GCD;
}

int main()
{
    int a, b;
    cout << "Enter the two numbers to find GCD\n";
    cin >> a >> b;

    int result = GCD(a,b);
    cout<<result<<endl;
    return 0;
}
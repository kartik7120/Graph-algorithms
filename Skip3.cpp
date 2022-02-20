#include<iostream>
using namespace std;
// All numbers from 1 to 100 divisible by 3 must be skipped
int main()
{
    for(int i=1;i<100;i++)
    {
        if(i%3==0)
        continue;
        cout<<i<<endl;

    }
    return 0;

}
#include<iostream>
using namespace std;
// Neha's mom only allows her to go out on odd days and when she goes out 300 ruppes are dedected form her pocketmoney
int main()
{
    for(int date=1;date<=30;date++)
    {
        if(date%2==0)
        continue;
        int pocketmoney=3000;
        if(pocketmoney==0)
        break;
        pocketmoney=pocketmoney-300;
    }
    return 0;
}
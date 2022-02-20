#include <iostream>
using namespace std;

bool getbit(int n,int pos)
{
    return (n & (1<<pos))!=0;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int xorsum = 0;
    for (int i = 0; i < n; i++)
    {
        xorsum=xorsum^arr[i]; // diff between two unique number
    }

    int pos=0;
    while(xorsum)
    {
        if(xorsik--)}

    return 0;
}
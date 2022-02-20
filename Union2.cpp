#include <iostream>
using namespace std;

union mix_t
{
    int l; // int  is 4 bytes
    struct
    {
        short hi; // short is 2 bytes
        short so;
    } s;
    char c[4]; // char is of 1 byte
} mix;

int main()
{
    mix.s.hi = 2;
    cout << mix.s.hi << endl;
    mix.s.so = 1;
    cout << mix.s.so << endl;

    mix.l=10236;
    cout<<mix.l<<endl;

    for(int i=0;i<4;i++)
    {
        cin>>mix.c[i];
    }

    for(int i=0;i<4;i++)
    {
        cout<<mix.c[i];
    }



    return 0;
}
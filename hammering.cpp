#include <iostream>
#include <cmath>
using namespace std;

//applying for loop using SHIFT operators

int main()
{
    //program to print multiples of 2

    // for(int i=2;i<=12;i=i*2)  we can apply the same for loop using shift operators as N<<a  = N * 2^a
    for (int i = 1; i <= 12; i++)
    {
        int c = i << 1;// more efficient as computer directely works on binary numbers rather than converting them from decimal to binary first
        cout << c << endl;
    }
    return 0;
}

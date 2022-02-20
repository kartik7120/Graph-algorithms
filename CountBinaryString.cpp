#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int one[100];
    int zero[100];
    one[1] = 1;
    zero[1] = 1;

    for(int i=2;i<=n;i++)
    {
        zero[i]=zero[i-1]+one[i-1];
        one[i]=zero[i-1];
    }
    cout<<zero[n]+one[n]<<'\n';
    return 0;
}
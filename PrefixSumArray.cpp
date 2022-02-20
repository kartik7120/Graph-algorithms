#include <iostream>
using namespace std;

/*
(a+b)%M=(a%M+b%M)%M  --- 1
(a−b)%M=(a%M−b%M)%M  --- 2
*/

int main()
{
    int arr[] = {1, 2, 3};
    int n=3;
    int M=2;
    int prefix[3]{0};
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = (arr[i] % M + curr) % M;
        prefix[i] = curr;
    }
    for(auto i:prefix)
    {
        cout<<i<<" ";
    }
    return 0;
}
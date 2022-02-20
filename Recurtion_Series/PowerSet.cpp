#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return 0;
}
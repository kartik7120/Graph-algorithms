#include <iostream>
using namespace std;
//Pascal's Triangle
/*
         1
      1     1
    1    2    1
  1    3    3    1
 1   4    6   4   1
 */
int main()
{
    int n;
    cin >> n;
    int coff = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || j == 1)
            
                cout<<coff;
                else
                cout << (coff*(i-j+i)/j);
            
        }
    }
    return 0;
}


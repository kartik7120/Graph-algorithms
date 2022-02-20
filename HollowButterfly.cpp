#include <iostream>
using namespace std;
// Using  Hollow Butterfly pattern
/*
* 
* *
*  *
*   *
*    *
*     *
*      *
*
*
*
*/
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j || j == 1)
                cout << "*";
            else
                cout << " ";
        }
        int space = (n * 2) - (i * 2);
        for (int x = 1; x <= space; x++)
            cout << " ";
        for (int j = 1; j <= i; j++)
        {
            if (i == j || j == 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == j || j == 1)
                cout << "*";
            else
                cout << " ";
        }
        int space = (n * 2) - (i * 2);
        for (int x = 1; x <= space; x++)
            cout << " ";
        for (int j = 1; j <= i; j++)
        {

            if (i == j || j == 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    try
    {
        try
        {
            throw 20;
        }
        catch (int e)
        {
            throw;
        }
    }
    catch (int e)
    {
        cout << "int exception\n";
    }
    return 0;
}
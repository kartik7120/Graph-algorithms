#include <iostream>
using namespace std;

int main()
{
    try
    {
        int *arr = new int[1000];
    }
    catch (exception &e)
    {
        cout << "Standard exception: " << e.what() << endl;
    }
    return 0;
}
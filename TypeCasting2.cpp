#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }
    catch (int e)
    {
        cout << "int exception\n";
    }
   // try
   // {
   //     throw 'a';
   // }
    catch (char a)
    {
        cout << "Character exception\n";
    }
  //  try
  //  {
  //      throw 2.36366;
  //  }

    catch (...)
    {
        cout << "Default exception\n";
    }
    return 0;
}
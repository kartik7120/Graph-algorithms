#include <iostream>
using namespace std;

using c = char;
using num = unsigned int;
using pointer = char *;
using array = int[5];

int main()
{
    c character = 'b';
    cout << character << endl;
    num number = 20;
    cout << number << endl;
    char ch = 'a'; 
     pointer p = &ch;
    cout << (*p) << endl;
    return 0;
}
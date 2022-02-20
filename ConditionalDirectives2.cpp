#include<iostream>
using namespace std;

int main()
{
    #ifndef TABLE_SIZE
    #define TABLE_SIZE 100
    #endif
    cout<<TABLE_SIZE<<endl;
    return 0;
}
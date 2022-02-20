#include<iostream>
using namespace std;

#define TABLE_SIZE 100

int main()
{
    #ifdef TABLE_SIZE
    cout<<TABLE_SIZE<<endl;
    #endif 
    return 0;

}
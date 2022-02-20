#include <iostream>
using namespace std;

#define TABLE_SIZE 100
int main()
{
    cout<<TABLE_SIZE<<endl;
}

#undef TABLE_SIZE
#define TABLE_SIZE 200;

int main2()
{
    cout<<TABLE_SIZE<<'\n';

    return 0;
}


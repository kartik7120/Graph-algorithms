#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int a=10;
    int *value;

    value= (int*) malloc(sizeof(a));
    *value=20;
    cout<<(*value)<<endl;
    free(value);
    return 0;
}
#include<iostream>
using namespace std;

#define str(x) #x
#define glue(a,b) a##b

int main()
{
    cout<<str(test)<<endl;
    glue(c,out)<<"test"<<'\n';
    return 0;
}
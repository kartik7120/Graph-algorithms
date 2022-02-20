#include<iostream>
using namespace std;

class myclass
{
    public:
    int n;
    myclass() :n(1){}

};

int main()
{
    const myclass obj;
    cout<<obj.n<<endl;
    return 0;
}
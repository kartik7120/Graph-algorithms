#include<iostream>
using namespace std;

namespace a
{
    int x=1;

} // namespace a

namespace b
{
    int x=2;
} // namespace b

namespace c
{
    int y=3;
} // namespace c

int main()
{
    cout<<a::x<<endl;
    cout<<b::x<<endl;
    cout<<c::y<<endl;
    return 0;
}
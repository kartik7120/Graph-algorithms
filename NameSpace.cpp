#include<iostream>

namespace a
{
    int sum()
    {
        return (1+2);
    }
}

namespace b
{
    float pi=3.1416;
    int sum()
    {
        return (2+3+4);
    }
}

int main()
{
    std::cout<<a::sum()<<std::endl;
    std::cout<<b::sum()<<std::endl;
    std::cout<<b::pi<<std::endl;
    return 0;
}
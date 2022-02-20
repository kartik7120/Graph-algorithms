#include <iostream>
using namespace std;

enum class color_s
{
    red,
    blue,
    green,
    indigo
};

enum class month_s : char {jan ,feb,march};

int main()
{
    color_s color;
    color = color_s::red;
    if(color==color_s::blue)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}
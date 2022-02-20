#include<iostream>
using namespace std;
// output question for uninary operator
int main()
{
    int i=1;
    //(++ is there after i thus it will increment later)
    //(if ++ is before ++ then it will increment instantely)
    //1     //3
    i=i++ + ++i;
    cout<<i<<endl;
    return 0;
}
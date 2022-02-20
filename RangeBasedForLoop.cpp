#include<iostream>
#include<string>
using namespace std;
//Range based for loop
int main()
{
     string str="Hello\n";
    for(char c : str)// for will run till the no of character in the string str
    cout<<c<<" "<<endl;
    return 0;
}
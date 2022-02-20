#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="nincompoop";

    //if we want to erase a certain chracters from the string starting from a certain index number

    //syntax of erase() function -> erase(index number from where the deletion will start,how many characters to be deleted)

    str.erase(3,2);//3 is index number from where the deletion will start and 2 is number of characters to be deleted starting from the 
    //index 3 (including that index mentioned at the start i.e. character at the 3rd index)

    cout<<str<<endl;
    return 0;
}
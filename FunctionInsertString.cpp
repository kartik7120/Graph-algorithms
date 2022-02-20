#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str="nincompoop";
    //if we need to insert a character or a whole string in the string str then we will use insert function

    string result=str.insert(2,"l");// syntax -> insert(index from where the insertion of a character will begin,character or string 
    // to be inserted)
    cout<<result<<endl;
    string result2=str.insert(3,"lol");
    cout<<result2<<endl;
    return 0;
}
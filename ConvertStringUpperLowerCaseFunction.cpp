#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str="kaartik";

    //function to convert string to uppercase or lowercase

    transform(str.begin(),str.end(),str.begin(),::toupper);//will convert to upper case
    cout<<str<<endl;

    // convert string in lower using transform function
    transform(str.begin(),str.end(),str.begin(),::tolower);

    cout<<str<<endl;
    return 0;
}
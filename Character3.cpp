#include<iostream>
using namespace std;

int main()
{
    char myword[]={'h','e','l','l','o','\0'};
    cout<<myword<<endl;
    char myword2[]={'h','e','l','l','o'};//for character we will have to add null pointer otherwise it will give some funny answers
    cout<<myword2<<endl;
    char myword3[]="hello";// in a string a null pointer ('\0') is automatically appended at the end
    cout<<myword3<<endl;
    return 0;
}
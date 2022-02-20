#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char ch[3];
     ch={'a','b','c','\0'};
    char ch2[]="hello";
    ch[1]='x';//legal
    ch[1]='xjb';//illgeal
    ch2="bye";//illgeal
    return 0;
}
#include<iostream>
using namespace std;

int main()
{

    char ch;
    cout<<"Enter the alphabet\n";
    cin>>ch;
    int q=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');// The condition can also be checked in this way, this statement will store 0 if the condition inside the bracket is true and 1 if it is false
    int p=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    cout<<"Alphabet is a vowel\n";
    else
    cout<<"Alphabet is a consonant"<<endl;
    cout<<p<<endl;
    cout<<q<<endl;
    return 0;
}
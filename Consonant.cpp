#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter the character\n";
    cin>>ch;
    switch(ch)
    {
        case 'a':
        cout<<"vowel\n";
        break;
        case 'e':
        cout<<"vowel\n";
        break;
        case 'i':
        cout<<"vowel\n";
        break;
        case 'o':
        cout<<"vowel\n";
        break;
        case 'u':
        cout<<"vowel\n";
        break;
        default:
        cout<<"Consonant"<<endl;
    }
    return 0;
}
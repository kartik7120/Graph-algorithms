#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter an alphabet"<<endl;
    cin>>ch;
    switch (ch)
    {
        case 'a':
        cout<<"It is a vowel\n";
        break;
        case 'e':
        cout<<"It is a vowel\n";
        break;
        case 'i':
        cout<<"It is a vowel\n";
        break;
        case 'o':
        cout<<"It is a vowel\n";
        break;
        case 'u':
        cout<<"It is a vowel\n";
        break;
   default:
    cout<<"It is a consonant\n";
    break;
    }
    return 0;

}
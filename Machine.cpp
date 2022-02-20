#include<iostream>
using namespace std;
/*Different language robot*/
int main()
{
    char button;
    cout<<"Enter a character :";
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"Nameste\n";
        break;
        case 'b':
        cout<<"Caio\n";
        break;
        case 'c':
        cout<<"Hello\n";
        break;
        case 'd':
        cout<<"Hi!"<<endl;
        break;
        default:
        cout<<"I am still learing\n";
        break;
        return 0;

    }
}
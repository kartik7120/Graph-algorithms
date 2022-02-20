#include <iostream>
using namespace std;

typedef char c;
typedef unsigned int num;
typedef char *pointer;
typedef int arr[5];

int main()
{

    c character ='c';
    cout<<character<<endl;
    num number = 20; // here num is acting like a keyword int and number is the name of a variable
    cout<<number<<endl;
    char ch='a';
    pointer point=&ch;
    cout<<(*point)<<endl;
    arr array={1,2,3,4,5};
    for(int i=0;i<5;i++)
    cout<<array[i]<<endl;

    //Do not declare it like below !!!
    /*
    c = 'a';
    cout << c << endl;
    num = 85;
    cout << num << endl;
    char ch = 'b';
    pointer = &ch;
    cout << (*pointer) << endl;
    arr = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    */
    return 0;
}
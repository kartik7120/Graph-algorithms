#include<iostream>
using namespace std;

int main()
{
    char arr[100]="apple";
    int i=0;
    while(arr[i]!='\0')// '\0' represents a null character which is present at the end of the character array to tell the compiler that// the sentence has ended;
    {
        cout<<arr[i]<<endl;
        i++;
    }              
}
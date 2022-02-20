#include<iostream>
using namespace std;

int main()
{
    
    char arr[5];
    cin.getline(arr,5);// if the delimter character is not specified then the delimiter character is taken as '\n'
    cout<<arr<<endl;
    for(int i=0;i<=5;i++)
    cout<<arr[i];
    return 0;
}
/*
In C++, stream classes support line-oriented functions, getline() and write() to perform input and output functions respectively.
 getline() function reads whole line of text that ends with new line or until the maximum limit is reached. 
 getline() is the member function of istream class and has the syntax:

// (buffer, stream_size, delimiter)
istream& getline(char*, int size, char='\n')

// The delimiter character is considered as '\n'
istream& getline(char*, int size)

The function does the following operations:

1. Extracts character up to the delimiter.
2. Stores the characters in the buffer.
3. Maximum number of characters extracted is size – 1.

Note that the terminator(or delimiter) character can be any character (like ‘ ‘, ‘, ‘ or any special character, etc.). 
The terminator character is read but not saved into a buffer, instead it is replaced by the null character.
*/
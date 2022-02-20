#include<iostream>
using namespace std;
// Palindrome words like "Nitin", "MOM", "RACECAR"
int main()
{
    int n;
    cout<<"Enter the number of characters\n";
    cin>>n;
    cout<<"Enter the word\n";
    char arr[n+1];// NULL character (\0) will be stored in the n+1 th position of the character array
    cin>>arr;
    bool result = 1;

    int i=0;
    while(i<n)
    {
        if(arr[i]!=arr[n-1-i])
       {
        result = 0;
        break;
       }
       i++;
    }
    if(result==1)
    cout<<"Palindrome Word\n";
    else
    cout<<"No"<<endl;
    return 0;
}
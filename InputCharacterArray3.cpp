#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[n+1];

    cout<<"Enter the sentence\n";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
// when using statement cin>>arr[i] to input characters , the compiler ignores the space character and treates indivisual 
//characters only and stores it in the array
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore(n,'\n');
    char arr[n];
    cin.getline(arr,n+1);// will take n character and will terminate when netline i.e. '\n' is recieved
    cin.ignore(n,'\n');
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
    
    bool flag=true;//checks if the a word is palindrome or not , we are here assuming that the word is palindrome before checking

    int i=1;

    while(i<n)
    {
        if(arr[i]!=arr[n-1-i])
        {
            flag=false;
            break;
        }
        i++;
    }
    if(flag)
    cout<<"palindrome"<<endl;
    else
    cout<<"no"<<endl;
}
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;

    char arr[100]="apple";
    cin.ignore(n,'\n');
    cin.getline(arr,n);
    bool check=true;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
       {
        check=false;
        break;
       }

    }
    if(check==true)
    cout<<"Palindrome word"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}
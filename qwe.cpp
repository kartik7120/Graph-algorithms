#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int st=0;
    int en=0;
    int currentlen=0;int maxlength=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=' '&&arr[i]!='\0')
        currentlen++;+
        else
        if(arr[i]==' '||arr[i]=='\0')
        {
        maxlength=max(maxlength,currentlen);
        currentlen=0;
        }
    }
    cout<<maxlength<<endl;
    return 0;
}
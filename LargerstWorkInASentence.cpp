#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of words\n";
    cin>>n;
    char arr[n+1];
    cout<<"Enter the sentecnce\n";
    cin.getline(arr,n); //used to input a total sentence of n size
    int maxlength = 0;// used to store maximum length of a word in a sentence
    int count = 0;// used to count the length of a word

    for(int i=0;i<n;i++)
    {
        if(arr[i]!=' ')
        count++;
        else
        if(arr[i]==' ')
        maxlength=max(maxlength,count);
    }
    cout<<"Max length of a word ="<<" "<<maxlength<<endl;
    return 0;
}
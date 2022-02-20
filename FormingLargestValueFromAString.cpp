#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    long number=stoi(str);
    int arr[str.length()];
    int counter=0;//counter variable for index of array arr

    for(int i=number;i>0;i=i/10)
    {
        int rem=i%10;
        arr[counter]=rem;
        counter++;
    }

    int i=1;
    while(i<str.length())
    {
        for(int j=i;j>=0;j--)
        {
            if(arr[j]>arr[j-1]&&j>0)
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
        i++;
    }
    for(int i=0;i<str.length();i++)
    cout<<arr[i];
    return 0;
}
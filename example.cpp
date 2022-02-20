#include<iostream>
using namespace std;

int main()
{
    int arr[3]={10,20,30};
    int a=arr[0];
    cout<<arr<<endl;
    cout<<*arr<<endl;

    int*ptr=&arr[0];
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}
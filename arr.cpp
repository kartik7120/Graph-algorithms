#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40};
    int *ptr=arr;

    cout<<arr<<endl;
    cout<<(*arr)<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<ptr[i]<<endl;
    }
    return 0;
}

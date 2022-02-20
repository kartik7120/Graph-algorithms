#include<iostream>
using namespace std;
int m;
void addarray(int myarray[])
{
    int sum=0;
    for(int i=0;i<m;i++)
    sum+=myarray[i];
    cout<<sum;
    return ;

}

int main()
{
    
    cin>>m;
    int arr[m];

    for(int i=0;i<m;i++)
    cin>>arr[i];

    addarray(arr);
    return 0;
}
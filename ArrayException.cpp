#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int arr[5]={110,20,30,40,50};
    cout<<arr[4]<<'\n';
    cout<<arr[6]<<endl;//will not give error in compile time but will give error in runtime
    cout<<arr[-2]<<endl;//will not give error in compile time but will give error in runtime
    return 0;
}

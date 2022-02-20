#include<iostream>
using namespace std;

int main()
{
    /* in case of do-while loop the loop will execute atleast once beacause the condition is been checked at the end 
         instead of at the beginning*/
    int n=0;
    cin>>n;
    do
    {
        cout<<n<<endl;
        cin>>n;
    }while(n>0);
    return 0;
}
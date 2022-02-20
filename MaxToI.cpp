#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"ENter the length of the array\n";
   cin>>n;
   int arr[n]={0};
   cout<<"Enter the elements of the array\n"; 
   for(int i=0;i<n;i++)
   cin>>arr[i];
   int mx=0;
   for(int i=0;i<n;i++)
   {
       mx=max(mx,arr[i]);

   
   cout<<mx<<endl;
   }
   return 0;
}
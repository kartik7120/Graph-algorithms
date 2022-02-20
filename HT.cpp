#include<iostream>
using namespace std;

int main()
{
   int row;int column;

   cout<<"Enter the rows\n";
   cin>>row;
   cout<<"Enter the column\n";
   cin>>column;

   for(int i=1;i<=row;i++)
   {
       for(int j=1;j<=column;j++)
       {
           if(i==1&&i==row&&j==1&&j==column)
           
               cout<<"*";
           
           else
           cout<<" ";
       }
       cout<<endl;
   }
   return 0;
}
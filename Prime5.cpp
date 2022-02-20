#include<iostream>
using namespace std;

void prime(int num) 
{
      int i=2;
      while(i<num)
      {
          if(num%i==0)
          break;
          i++;
      }
      if(i==num)
      cout<<"Prime\n";
}

int main()
{
    int n;
    cout<<"Enyter the number\n";
    cin>>n;
    prime(n);
    return 0;
}
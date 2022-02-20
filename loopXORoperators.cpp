#include<iostream>
using namespace std;
// print odd numbers till n
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        // if(i%2==0) if i % 2 is equal to zero then the number is even otherwise the number is odd 
        // we can implement the same condition using bit wise operators as :-
        // all the odd numbers like 1,3,5,7 ... have 1 bit at the end like (1 is represented by 0001, 3 is represented by 0011 and so on)
        // all even numbers like 2,4,6,8 ... have 0 bit at the end like (2 is is represented by 0010, 4 is represented by 0100 and so on)
        // so we can find weather a number is even or odd by checking the last bit of a number

        if(i&1==1) // if i is odd then for eg i is 1 so 0001 & 0001 which will give 0001 which is equal to 1 in decimal number thus it is odd
        {             
            cout<<i<<endl; //prints all odd numbers
        }         //if i is even then for eg i is 2 so 0010 & 0001 which will give 0000 which is equal to 0 in decimal number thus it is even
    }
     return 0;

                                 
    
}
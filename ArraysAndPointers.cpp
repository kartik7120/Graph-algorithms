#include<iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40};
    int *ptr=arr;
    cout<<*arr<<endl;//will print 1st element placed at the zero th position of the array
    for(int i=0;i<4;i++)//printing all elements using pointers
    {
        cout<<*ptr<<endl;
        ptr++;//incremeting the address of the array
    }

    //printing array using arr as a pointer itself

     //*arr acts as a pointer initially pointing at the start of the array and it is constant pointer meaning if we write
    //++arr then it is illigal to write since *arr is a constant pointer

   for(int i=0;i<4;i++)
   cout<<*(arr+i)<<endl;//now we are not writing arr+4 as arr is a constant pointer pointing at the index
   // and it will proceed to the index in the array rather than proceeding to the next memory location like
   // other pointers do.
    


}
#include<iostream>
using namespace std;

int main()
{
    int a=10; // memory allocated in stack
    
    int *p=new int(); //allocate memory in heap , 'new' keyword is used to allocate memory in heap.It will allocate memory in heap 
                      //of integer type

    *p=10; // the value of p will not be stored in heap but it will stored in stack. It will be pointing to address of the memory location
    // where the memory is allocated to store of an integer type 

    //This memory allocation happens directely and we can access this memory from anywhere as long as we have it's memory address
    // it will act as global variable

    //since we are allocating the memory manually we also need to deallocate it manually

    delete(p); //delete operator is used to deallocate memory from heap

    // delete(p) will delete the memory value allocated in the heap but it's pointer will still remain in the stack and this pointer
    //is called 'dangling pointer'

    // dangling pointer means that it is pointing to the memory location where there is no value is stored.It has no use since there
    //is no value is stored

    p=new int[4]; // allocating an array of integer type in heap

    // pointer will be pointing to the element of the array present at the zero th (0th) position and will be stored in p

    // we can change the size of the array in the heap using dynamic memory allocation as it not compulsory to know the size of the 
    //array during dyanmic memory allocation

    delete[]p;// if we want to delete the block of memory that is being allocated to array in heap will be deleted using delete[]p

    p=NULL;// if we want to delete the pointer in the stack then we will use p=NULL

    /*
    It is important to deallocate the memory in heap because in order to avoid a condition of memory leak where we allocate a 
    memory in heap and do not delete it.It can cause serious issues in systems in servers where they do not terminate.
    */
   return 0;
}
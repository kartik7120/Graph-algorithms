#include"iostream"
using namespace std;

int main()
{
    int a= 10;int b=5;
    int c =a/b;// return quitient
    int d =a%b;//return remainder
    cout<<"c = "<<"d ="<<endl;
    cout<<c<<" "<<d<<endl;

    bool not_operator = !a;// reverses the logical state of the character
    cout<<not_operator<<endl;

    int Binary_Ones_compliment_Operator = ~a;//flips the bits of the operator Explaination -> binary representation of 10 is 1010
    // if we flip the bits then it will become 0101
    cout<<Binary_Ones_compliment_Operator<<endl;

    int n = 5;
    int arr[n];

    int size_of_a = sizeof(a);
    int size1=sizeof(arr);// the answer will come 20 instead of actual length of the array because it calculates the size as 
                        // size of integer datatype*length of the array i.e. n i.e. 5
    cout<<"size_of_a ="<<size_of_a<<endl<<size1<<endl;
    int size2=sizeof(arr[0]); //size of each space in the array in the integer is 4, this will keep on changing depending apon the
    //data type of the array in which it is declared
    cout<<"Size of each location of the array ="<<size2<<endl;
    int size_of_an_array=sizeof(arr)/sizeof(arr[0]);
    cout<<"size of the array = "<<size_of_an_array<<endl;// calculates the length of the array

    int bitwise_AND=a&b;// compares binary numbers for both operands
    cout<<"Value of bitwise AND = "<<bitwise_AND<<endl;

    int bitwise_OR = a|b;// compares binary numbers for both operands
    cout<<"Value of bitwise OR = "<<bitwise_OR<<endl;

    int bitwise_XOR = a^b; //compares binary numbers for both operands
    cout<<"Value of bitwise XOR = "<<bitwise_XOR<<endl;
    
    

    return 0;
}
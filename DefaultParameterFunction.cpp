#include<iostream>
using namespace std;

void myFunction(string n="Norway")//https://www.w3schools.com/cpp/cpp_function_default.asp (use this link to understand default parameter value)
{
      cout<<n<<endl;
      return ;
}
int main()
{
    myFunction("Hello");
    myFunction("Psycho-pass");
    myFunction();//since no argument is passed thus default value of 'n' i.e. "Norway" will be printed.
    myFunction("parrot");
    return 0;
}
/*
The parametre with the default value is often known as optional parametre,from the above example "Norway" is the default
value while 'n' is the optional parametre. 
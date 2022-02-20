#include <iostream>
using namespace std;
// Return the nth catalan
int catalan(int n)
{
    if (n <= 1)
        return 1;
    int result = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        result += catalan(i) * (catalan(n - i - 1));
    }
    return result;
}
// First 10 catalan numebers
//This is NOT an optimised approach to calculate the catalan numbers and
//it could be improved using Dynamic Programming

//Solution using Dynammic programming
//https://www.geeksforgeeks.org/program-nth-catalan-number/
int main()
{
    for(int i=0;i<10;i++)
    {
        cout<<catalan(i)<<" ";
    }
    
    return 0;
}
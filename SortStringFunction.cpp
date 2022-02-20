#include<iostream>
#include<string>
#include<algorithm>  // sort function is present in the algorithm header file
using namespace std;

int main()
{
    string str="edcba";

    //to sort the string lexographically, we will use sort() function present in header file <algorithm>

    sort(str.begin(),str.end()); //begin() Returns a read-only (constant) iterator that points to the first character in the string. 
                                 //end() Returns a read-only (constant) iterator that points one past the last character in the string.
    cout<<str<<endl;
    return 0;
}
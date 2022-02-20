#include <iostream>
#include <stack> // use for implementation of the stack data structure using STL
using namespace std;

void reverseString(string str)
{
    stack<string> st; //Making a stack of type int and making a object st of stack data structure
    string temp="";
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]!=' ')
        temp=temp+str[i];
        else
        {
            st.push(temp);
            temp="";
        }
    }

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop(); //important to do since the top element will not be replaced
    }
}

int main()
{
    string str;
    getline(cin, str);

    reverseString(str);

    return 0;
}
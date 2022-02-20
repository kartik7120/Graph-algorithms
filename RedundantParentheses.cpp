#include <iostream>
#include <stack>
using namespace std;

/*
Given a valid mathematical expression, find whether it have reduntant parentheses or not.
It contain the following operator '+', '*' , '-' , '/'
*/

int RedundentBraces(string str)
{

    stack<char> st;
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]=='+' || str[i]=='-' || str[i]=='*' ||str[i]=='/')
        {
            st.push(str[i]);
        }
        else
        if(str[i]=='(')
        st.push(str[i]);
        else
        if(str[i]==')')
        {
            if(st.top()=='(')
            count++;
            while(!st.empty() && st.top()=='+' || st.top()=='-'||st.top()=='*'||st.top()=='/')
            {
                st.pop();
            }
            st.pop();
        }
    }

    return count;
}

int main()
{
    string str;
    cout << "Enter the expression\n";
    getline(cin, str);
    cout << RedundentBraces(str) << '\n';
    return 0;
}
    //  if (str[i] == ')')
    //  {
    //      while (!st.empty() && st.top() != '(')
    //      {
    //          st.pop();
    //      }
    //      if (!st.empty())
    //          st.pop();
    //      if (!st.empty() && st.top() == str[i])
    //          count++;
    //  }
    //  else
    //      st.push(str[i]);
    //
    // return count;
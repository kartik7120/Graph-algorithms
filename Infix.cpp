#include <iostream>
#include <stack>
using namespace std;

int precedence(char c)
{
    if(c=='^')
    return 3;
    else
    if(c=='/' || c=='*')
    return 2;
    else
    if(c=='+'||c=='-')
    return 1;
    else
    return -1;
}

string Infix(string str)
{
    stack<char> st;
    string res = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            res+=str[i];
        }
        else
        if(str[i]=='(')
        {
            st.push(str[i]);
        }
        else
        if(str[i]==')')
        {
            while(!st.empty() && st.top()!='(')
            {
                res+=st.top();
                st.pop();
            }
        }
        else
        {
            while(!st.empty() && precedence(st.top())>precedence(str[i]))
            {
                res+=st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty())
    {
        if(st.top()!='(')
        res+=st.top();
        st.pop();
    }
    return res;
}

int main()
{
    string str;
    getline(cin, str);
    string ans = Infix(str);
    cout << ans << endl;
    return 0;
}
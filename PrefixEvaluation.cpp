#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int prefix(string s)
{
    int ans = 0;
    stack<int> st;
    string temp = "";
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    string str;
    getline(cin,str);
    int ans=prefix(str);
    cout<<ans<<'\n';
    return 0;
}
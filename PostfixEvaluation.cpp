#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
//Time complexicity is O(n) since we are traversing the string only once
int postfix(string s)
{
    stack<int> st;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
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
            case '^':
                st.push(pow(op1, op2));
                break;
            default:
                break;
            }
        }
        i++;
    }
    return st.top();
}

int main()
{
    string str;
    getline(cin, str);
    int ans = postfix(str);
    cout << ans << '\n';
    return 0;
}
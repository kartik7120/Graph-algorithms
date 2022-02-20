#include <iostream>
#include <stack>
using namespace std;

//Balanced String -> {[()]}
//Unbalanced String -> [{()]}

bool BalancedParenthesis(string str)
{
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else if (str[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }

        if (str[i] == '{')
        {
            st.push(str[i]);
        }
        else if (str[i] == '}')
        {
            if (!st.empty() && st.top() == '{')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (str[i] == '[')
        {
            st.push(str[i]);
        }
        else if (str[i] == ']')
        {
            if (!st.empty() && st.top() == '[')
            {
                st.pop();
            }
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (st.empty())
        ans = true;
    else
        ans = false;
    return ans;
}

int main()
{
    string str;
    getline(cin, str);
    bool ans = BalancedParenthesis(str);
    if (ans)
        cout << "Valid Parenthesis\n";
    else
        cout << "Not valid Parenthesis\n";
    return 0;
}
//Wrong Algorithm
// for (int i = 0; i < str.length(); i++)
// {
//     if (str[i] == '{' || str[i] == '(' || str[i] == '[')
//     {
//         st.push(str[i]);
//     }
//     else if (str[i] == '}' || str[i] == ')' || str[i] == ']')
//     {
//         if (!st.empty())
//             st.pop();
//     }
// }
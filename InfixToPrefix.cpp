#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int precedence(char c)
{
  if (c == '^')
    return 3;
  else if (c == '*' || c == '/')
    return 2;
  else if (c == '+' || c == '-')
    return 1;
  else
    return -1;
}

string InfixtoPrefix(string str)
{
  stack<char> st;
  string res;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    {
      res += str[i];
    }
    else if (str[i] == '(')
      st.push(str[i]);
    else if (str[i] == ')')
    {
      while (!st.empty() && st.top() != '(')
      {
        res += st.top();
        st.pop();
      }
    }
    else
    {
      while (!st.empty() && precedence(st.top()) > precedence(str[i]))
      {
        res += st.top();
        st.pop();
      }
      st.push(str[i]);
    }
  }
  while (!st.empty())
  {
    if (st.top() != '(')
      res += st.top();
    st.pop();
  }
  reverse(res.begin(), res.end());
  return res;
}

int main()
{
  string str;
  getline(cin, str);
  reverse(str.begin(), str.end());
  string newstr;
  for (int i = 0; i < str.length(); i++)
  {
    if (str[i] == '(')
      newstr = newstr + ")";
    else if (str[i] == ')')
      newstr = newstr + "(";
    else
      newstr = newstr + str[i];
  }
  string ans = InfixtoPrefix(newstr);

  cout << ans << '\n';
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  string s = "";
  //  cout<<s[1]<<'\n';
  s.append("kaartik");
  for (int i = s.length() - 1; i > 5; i--)
  {
    s[i] = '\0';
  }
  cout << s << endl;
  s = s + "ghj";
  cout << s << '\n';
  return 0;
}
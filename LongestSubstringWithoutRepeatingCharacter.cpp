#include <iostream>
#include <string>
#include<vector>
using namespace std;
/*
s="abccabccb"
Output : 3
Ans : "abc" with the length of 3

s="bbbbb"
Output: 1
Ans : "b"
*/

int LongestSubstring(string str)
{
    int start = -1;
    vector<int> dict(256,-1);
    int maxLen=0;
    for(int i=0;i<str.length();i++)
    {
        if(dict[str[i]]> start)
        start=dict[str[i]];
        dict[str[i]]=i;
        maxLen=max(maxLen,i-start);
    }
    return maxLen;
}

int main()
{
    string str;
    getline(cin, str);
    cout << LongestSubstring(str) << '\n';
    return 0;
}
//  int count = 0;
//  int countMax = 0;
//  for (int i = 1; i< str.length();i++)
//  {
//      if(str[i-1]!=str[i])
//      {
//          count+=1;
//      }
//      else
//      {
//          countMax=max(countMax,count);
//          count=0;
//      }
//  }
//  return countMax;
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void makestack(vector<int>&v)
{
    stack<int>st;
    for(int i=0;i<v.size();i++)
    {
        st.push(v[i]);
    }

   

  // while(!st.empty())
  //  {
  //      cout<<st.top()<<" ";
  //      st.pop();
  //  }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    makestack(v);
    return 0;
}
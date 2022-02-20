#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void reversestack(stack<int> &st)
{
    if(st.empty())
    {
        return ;
    }
    int ele=st.top();
    st.pop();
    reversestack(st);
   
  //  cout<<ele<<endl;
}

void makestack(vector<int>&v)
{
    stack<int> st;
    for(int i=0;i<v.size();i++)
    {
        st.push(v[i]);
    }
    reversestack(st);
}

int main()
{
    int n;
    cout<<"Enter the length of the stack\n";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    makestack(v);
    return 0;
}
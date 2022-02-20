#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void insertAtBottom(stack<int>&st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return ;
    }
    int toele=st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(toele);
}

void reverse(stack<int>&st)
{
    if(st.empty())
    {
        return ;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertAtBottom(st,ele);
}

void makestack(vector<int>&v)
{
    stack<int>st;
    for(int i=0;i<v.size();i++)
    {
        st.push(v[i]);
    }
    reverse(st);
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the stack\n";
    cin>>n;
    cout<<"Enter the elements of the stack\n";
    vector<int>v(n);
    for(int i=0;i<v.size();i++)
    {
        cin>>v[i];
    }
    makestack(v);
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> v)
{
    vector<int> :: iterator it;
    for(it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
}

void Permutation(vector<int> v,int n)
{
    if(n==0)
    return ;

    for(int i=1;i<v.size();i++)
    {
        swap(v[i],v[i-1]);
        if(v[i]==v[i-1])
        continue;
        print(v);
        cout<<endl;
    }
    Permutation(v,n-1);
}

int main()
{
    int n;
    cout<<"Entre the number of elements\n";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter the elements\n";

    for(int i=0;i<n;i++)
    cin>>v[i];

    Permutation(v,n);
    return EXIT_SUCCESS;
}
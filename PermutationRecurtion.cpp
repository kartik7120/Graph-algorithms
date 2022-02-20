#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int> v,int n)
{
    vector<int> :: iterator it;
    for(it=v.begin();it<v.end();it++)
    {
        cout<<*it<<" ";
    }
}

void Permutation(vector<int> v,int n,int fact)
{
    if(fact==0)
    return ;

    for(int i=1;i<n;i++)
    {
        swap(v[i],v[i-1]);
        print(v,n);
        cout<<endl;
    }
    Permutation(v,n,fact-1);
}

int main()
{
    int n;

    cin>>n;

    vector<int> v(n);

    for(int i=0;i<v.size();i++)
    cin>>v[i];

    int i=n;
    int fact=1;
    while(i>0)
    {
        fact=fact*i;
        i--;
    }
    Permutation(v,n,fact/2);
    return 0;

}
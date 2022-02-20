#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m;int a,b,k;
    cin>>m;
    int queries[m][3];
    int *p=new int[n];int counter=2;
    int st=0;int en=0;int valueadd=0;
    for(int i=0;i<n;i++)
    p[i]=0;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b>>k;
            queries[i][counter-2]=a;
            queries[i][counter-1]=b;
            queries[i][counter]=k;
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(j==0)
            st=queries[i][j];
            else 
            if(j==1)
            en=queries[i][j];
            else 
            if(j==2)
            valueadd=queries[i][j];
        }
        for(int i=st-1;i<en;i++)
        {
            p[i]=p[i]+valueadd;
        }
        st=0;en=0;valueadd=0;
    }
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(max<p[i])
        max=p[i];
    }
    delete[]p;
    p=nullptr;
    cout<<max<<endl;
    return 0;
}
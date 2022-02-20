#include<iostream>
using namespace std;

int Max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else
    if(b>c)
    return b;
    else
    return c;
}

int Min(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
        return a;
        else
        return c;

    }
    else
    if(b<c)
    return b;
    else
    return c;
}

int main()
{
    int a,b,c;
    cout<<"Ennter a number\n";
    cin>>a>>b>>c;
    int d=Max(a,b,c);
    int e=Min(a,b,c);
    cout<<"Max = "<<d<<endl;
    cout<<"Min = "<<e<<endl;
    return 0;
}
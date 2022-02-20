#include<iostream>
#include<cmath>
using namespace std;

int max(int a,int b,int c)
{
    if(a>b)
    {
        if(a<c)
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

int main()
{
    int a,b,c;
    cout<<"Enter three sides of triangle\n";
    cin>>a>>b>>c;
    int d=max(a,b,c);
    int h;
    if(d==a)
     h=sqrt((b*b)+(c*c));
     else
     if(d==b)
     h=sqrt((c*c)+(a*a));
     else
     if(d==c)
     h=sqrt((a*a)+(b*b));

    if(d==h)
    cout<<"Phythagorian Triplet\n";
    else
    cout<<"no\n";
    return 0;
}
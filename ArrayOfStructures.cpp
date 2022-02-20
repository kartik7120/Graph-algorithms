#include<iostream>
using namespace std;

struct anime
{
    string title;
    int date;
}name[3];

void printanime(anime t)
{
    cout<<t.title<<endl;
    cout<<t.date<<endl;
}

int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>name[i].title; // an array of strings
        cin>>name[i].date; // an array of integers
    }
    for(int i=0;i<n;i++)
    {
        printanime(name[i]);
    }
    return 0;
}
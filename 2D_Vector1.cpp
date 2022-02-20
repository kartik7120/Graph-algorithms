#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the dimension of the vector\n";
    cin>>n;

    vector<vector<int>> v
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

    /*
    cout<<"Enter the elements of the vector\n";
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cin>>x;
            v.push_back()
        }
    }

    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    */
}
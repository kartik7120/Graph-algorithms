#include"iostream"
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str;
    getline(cin,str);

    sort(str.begin(),str.end(),greater<int>());
    cout<<str<<endl;
    return 0;
}
//https://www.geeksforgeeks.org/sort-c-stl/ (use this to understand the syntax and working of sort function)
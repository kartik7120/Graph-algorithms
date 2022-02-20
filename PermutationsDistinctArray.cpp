#include <iostream>
using namespace std;

void permutation(string str, string ans)
{
    if (str.length() == 0)
        cout<<ans<<endl;

    char ch = str[0];
    for (int i = 0; i < str.length(); i++)
    {
        string ros = str.substr(0, i) + str.substr(i+1);
        permutation(ros,ans+ch);
    }
}

int main()
{
     int n;
     cout<<"Enter the elements of the array\n";
     cin>>n;
    string str;

    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        str += arr[i];
    }
    permutation (str,"");
    return 0;
}
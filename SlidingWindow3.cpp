#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

bool isPalindrome(int num)
{
    int sum=0;
    for(int i=num;i>0;i=i/10)
    {
        sum=(i%10)+sum*10;
    }

    if(sum==num)
    return true;
    else
    return false;
}

void FindPalindrome(vector<int> arr,int k)
{
    int num=0;

    for(int i=0;i<k;i++)
    {
        num=num*10+arr[i];
    }

    if(isPalindrome(num))
    {
        cout<<"YES\n";
        return ;
    }

    for(int j=k;j<arr.size();j++)
    {
        num=(num%(int)pow(10,k-1))*10+arr[j];

        if(isPalindrome(num))
        {
            cout<<"YES\n";
            break;
        }
    }
}


int main()
{
    vector<int> arr={2,3,5,1,1,1};
    FindPalindrome(arr,4);
    return 0;
}
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

/*
The span of the stock's price today is defined as the maximum number of consecutive
days (starting from today and going backwards) for which the price of the stocks was
less than or equal to today's price

Find the span of stocks for all the days
*/

//Brute Force apporach

void StockPrices(vector<int> arr,int n)
{
    vector<int> ans;
    stack<pair<int,int>>st; // A pair stack of {price,days}

    for(int i=0;i<arr.size();i++)
    {
        int days=1;
        while(!st.empty() && st.top().first <= arr[i])
        {
            days+=st.top().second;
            st.pop();
        }
        st.push({arr[i],days});
        ans.push_back(days);
    }    

    for(auto i : ans)
    {
        cout<<i<<" ";
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
   vector<int> arr(n);
    cout<<"Entre the elements of the array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    StockPrices(arr,n);
    return 0;
//void StockPrices(vector<int> arr,int n)
//{
//    vector<int> ans;int count=0;
//    for(int i=0;i<n;i++)
//    {
//        for(int j=i;j>=0;j--)
//        {
//            if(arr[j]<=arr[i])
//            count++;
//            else
//            break;
//        }
//        ans.push_back(count);
//        count=0;
//    }
//    for(int i=0;i<ans.size();i++)
//    cout<<ans[i]<<" ";
//}
}
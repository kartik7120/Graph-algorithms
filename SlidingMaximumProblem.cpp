#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array\n";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cout<<"Enter the value of k\n";
    cin >> k;
    vector<int> ans;
    int maxele = -1;
    int i = 0;
    int j = 0;
    while (i < n-2)
    {
        for (j = i; j < k; j++)
        {
            maxele = max(maxele, v[j]);
        }
        ans.push_back(maxele);
        maxele = -1;
        i++;
        k++;
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

/*
Input: arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6}, K = 3 
Output: 3 3 4 5 5 5 6
Explanation: 
Maximum of 1, 2, 3 is 3
Maximum of 2, 3, 1 is 3
Maximum of 3, 1, 4 is 4
Maximum of 1, 4, 5 is 5
Maximum of 4, 5, 2 is 5 
Maximum of 5, 2, 3 is 5
Maximum of 2, 3, 6 is 6

Input: arr[] = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13}, K = 4 
Output: 10 10 10 15 15 90 90
Explanation:
Maximum of first 4 elements is 10, similarly for next 4 
elements (i.e from index 1 to 4) is 10, So the sequence 
generated is 10 10 10 15 15 90 90
*/
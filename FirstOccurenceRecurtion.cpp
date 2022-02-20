#include <iostream>
using namespace std;

int FirstOccurence(int arr[], int n, int i, int k)
{
    if (i == n)
        return -1;
    if (arr[i] == k)
        return i;

    return FirstOccurence(arr, n, i + 1, k);
}

int LastOccurence (int arr[],int n,int i,int k)
{
    if(i==0)
    return -1;
    if(arr[i]==k)
    return i;
    return LastOccurence(arr,n,i-1,k);
}

int main()
{
    int n;
    cout << "Enter the number of terms\n";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter the number to be checked\n";
    int k;
    cin >> k; // Number to be found

    int st = FirstOccurence(arr, n, 0, k);
    int en= LastOccurence(arr,n,n-1,k);
    cout<<"First Occurence = "<<st<<endl;
    cout<<"Last Occurence = "<<en<<endl;
    return 0;
}
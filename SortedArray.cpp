#include<iostream>
using namespace std;

int FindEle(int arr[],int l,int r,int key)
{
    if(l > r)
    {
        return -1;
    }

    int mid=(l+r)/2;
    if(arr[mid] == key)
    {
        return mid;
    }

    if(arr[mid] < key && arr[r] >= key) 
    {
        return FindEle(arr,l,mid-1,key);
    }
    else
    {
        return FindEle(arr,mid+1,r,key);
    }

    if(arr[mid] > key && arr[l] <=key)
    {
        return FindEle(arr,mid+1,r,key);
    }
    else
    {
        return FindEle(arr,l,mid-1,key);
    }
}

int main()
{
    int arr[]={30,40,50,10,20};
    cout<<FindEle(arr,0,4,10)<<'\n';
    return 0;
}
/*
1. make mid, return true if mid element == key.

2. if mid element is less than key we need to search in right half, but here array is rotated so we dont know that key lie in right half or not. What to do now? check high element is not less than key, if it is search in left half, otherwise in right half.

3. now for mid element is greater than key, we need to search in left half, but here array is rotated so we dont know that key lie in left half or not. What to do now? check low element is not greater than key, if it is search in right half, otherwise in left half.

bool bSearchInRotatedArray(int arr[],int n,int search){
    int low = 0;
    int high = n-1;
    int mid;
    while(low<high){
        mid = (low+high)/2;
        //cout<<"("<<low<<","<<mid<<","<<high<<")";
        if(arr[mid]==search)return true;
        if((arr[mid]<search && search<=arr[high]) || (arr[mid]>search && search>=arr[low])){
            low = mid + 1;
        }
        if((arr[mid]<search && search>arr[high]) || (arr[mid]>search && search<arr[low])){
            high = mid - 1;
        }
    }
    return false;
}
*/
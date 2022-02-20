#include <iostream>
#include <algorithm>
#include<numeric>
#include <vector> // header files to include vectors in our code
using namespace std;

int main()
{
    /*
    vector<int> v; // implementation of the vector , v is the name of the vector

    v.push_back(1); // using this function 1 will added at the end of the vector v
    v.push_back(2); // using this function 2 will added at the end of the vector v
    v.push_back(3); //using this function 3 will added at the end of the vector v

    // Print the elements of the vector

    for (int i = 0; i < v.size(); i++) // size() function will give of the vector
    {
        cout << v[i] << endl;
    }

    //Print the elements of the vector using an interator

    vector<int>::iterator it; // it is the name of the iterator

    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    //Print the elements of the vector using auto iterator

    for (auto element : v) //auto iterator will tell the compiler to decide itself that what is data type of v vector
    {
        cout << element << endl; //here element represent the elements of the vector
    }

    v.pop_back(); // it will pop or remove the element from the end of the vector
    // output will be 1 2 instead of 1 2 3

    vector<int> v2(3, 50); // We can also specify the size of the vector which is three in this case but also what those 3 elements
    //are going to be
    // output would be 50 50 50

    // for(auto element:v2)
    //  cout<<element<<endl;

    //If  we want to swap the values of v and v2 then we can do that by using the swap function

    swap(v,v2); 

    for (auto element : v) //auto iterator will tell the compiler to decide itself that what is data type of v vector
    {
        cout << element << endl; //here element represent the elements of the vector
    }
    for (auto element : v2) //auto iterator will tell the compiler to decide itself that what is data type of v vector
    {
        cout << element << endl; //here element represent the elements of the vector
    }

    //Sorting the elements of the vector

    sort(v.begin(),v.end());

    //for finding minimum and maximum element in a vector
    */

    /* vector<int> v3(3);
    v3.push_back(1);
    v3.push_back(2);
    v3.push_back(3);

    int minimum= *min_element(v3.begin(),v3.end());

    int maximum= *max_element(v3.begin(),v3.end());

    cout<<minimum<<endl;

    cout<<maximum<<endl;
    */

    //To calculate sum of the vector

    vector<int> v4(3);

    v4.push_back(1);
    v4.push_back(2);
    v4.push_back(3);

    // we can calculate the sum of the vector using accumulate() function defined in the <numeric> liberary
    int sum = accumulate(v4.begin(),v4.end(),0);
    cout<<sum<<endl;

    //To convert a vector into a prefix sum array
    // for eg if arr[]={1,2,3} then it's prefix array is {1,3,6}

    partial_sum(v4.begin(),v4.end(),v4.begin());
    vector<int> :: iterator it;
    for(it=v4.begin();it<v4.end();it++)
    {
        cout<<(*it)<<endl;
    }
    
    return 0;
}
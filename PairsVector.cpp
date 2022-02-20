#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int,char> v;

    v.first=100;
    v.second='G';

    cout<<v.first<<endl;
    cout<<v.second<<endl;

    //We can also initialize a pair using the syntax -> pair< data_type1 , data_type2> pair_name(value 1,value 2)

    pair<int ,bool> v1(1,true);

    cout<<v1.first<<endl;
    cout<<v1.second<<endl;

    //Different ways to initialize a pair

    pair<int ,char> v3;

    v3=make_pair(1,'c');
    cout<<v3.first<<endl;
    cout<<v3.second<<endl;

    v3={2,'t'};

    cout<<v3.first<<endl;
    cout<<v3.second<<endl;
// = = can be used to compare values of two pairs 
   // bool compare= v3.first==v1.first;

    //cout<<compare<<endl;

    // we can perform all logical operations on the elements of the pair like = = , > = , < = , ! = etc

    bool compare=v3.first>v1.first;
    cout<<compare<<endl;
    
    return 0;
}
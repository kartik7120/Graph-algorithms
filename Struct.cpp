#include <iostream>
#include<sstream>
using namespace std;

// http://www.cplusplus.com/doc/tutorial/structures/  visit for more info

struct product
{
    int weight;
    int price;
};

product apple,banana,pine;

struct phone
{
    int charger;
    int screen;
}   price, weight;

int main()
{
    apple.weight=20;
    cout<<apple.weight<<endl;

    string n;

    getline(cin,n);
    stringstream(n)>>banana.price;
    cout<<banana.price<<endl;

    
    return 0;
}
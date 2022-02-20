#include<iostream>
using namespace std;

int main()
{
    string food="Pizza\n";
    string &meal=food;//meal is a reference to the food so we can either use food variable to print directely or use meal 
                     //which is the reference to the food.
    cout<<food<<endl;
    cout<<meal<<endl;
    return 0;
}
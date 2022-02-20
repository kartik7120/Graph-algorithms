#include <iostream>
using namespace std;

int main() {
	
	int a;int b;int c;
	cout<<"Enter the value of a,b and c\n";
	cin>>a>>b>>c;
	if(a==b&&b==c)
	cout<<"Triangle is eqilatrial";
	else
	if(a==b||b==c||c==a)
	cout<<"Triangle is isocelse\n";
	else
	cout<<"Triangle is scaline\n";
	return 0;
}
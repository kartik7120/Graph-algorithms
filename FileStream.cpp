#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream myfile;
    myfile.open("example.txt");
    myfile<<"Writing this to a file.\n";
    if(myfile.is_open())
    cout<<"yes"<<endl;
    myfile.close();
    return 0;
}
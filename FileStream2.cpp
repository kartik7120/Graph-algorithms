#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    ofstream myfile2("example.txt");
    if(myfile2.is_open())
    {
        myfile2<<"This is a line.\n";
        myfile2<<"This is another line.\n";
        myfile2.close();
    }
    else
    cout<<"Unable to open file";
   // cout<<myfile2.bad()<<endl;
   // cout<<myfile2.fail()<<endl;
   // cout<<myfile2.eof()<<endl;
   // cout<<myfile2.good()<<endl;
   // myfile2.clear();
    return 0;
}
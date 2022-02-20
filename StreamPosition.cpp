#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream myfile("kaartik.txt");
    if(myfile.is_open())
    {
        myfile<<"I love watching Anime.\n";
        myfile<<"I would like some coffee\n";
        myfile.close();
    }
    cout<<myfile.tellg()<<endl;
    cout<<myfile.tellp()<<endl;
    myfile.seekg(5);
    myfile.seekp(5);
    return 0;
}
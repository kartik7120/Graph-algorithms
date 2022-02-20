#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array\n";
    cin>>n;

    char arr[100]={0};// used 100 instead of n because c++ does not support variable arrays
                     // (use vectors if size of array changes during running of the program)
    cin.ignore(n,'\n');// https://stackoverflow.com/questions/1887097/why-arent-variable-length-arrays-part-of-the-c-standard
    cout<<"Enter the characters of the array\n";
    cin.getline(arr,100);
    int maxlength=0;// used for storing max length of a word in a sentence
    int currlength=0;// used for storing length of different words
    
    for(int i=0;i<=n;i++)
    {
        if(arr[i]!=' ')
        currlength++;
        
        if(arr[i]==' '||arr[i]=='\0')
        {
            maxlength=max(currlength,maxlength);
            currlength=0;
        }
        
    }
        cout<<maxlength-1<<endl;
        return 0;
}

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str="abcdefghijjjj";
    
    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str.length();i++)
    {
        freq[str[i]-'a']++;
    }
    int maxfreq=0;
    char ans='a';//character with maximum frequency
    for(int i=0;i<26;i++)
    {
        if(freq[i]>maxfreq)
        {
            maxfreq=freq[i];
            ans =i+'a';
        }
    }
    cout<<maxfreq<<endl;
    cout<<ans<<endl;
    return 0;
}
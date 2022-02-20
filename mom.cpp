#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char nuts[]={'@', '%', '$', '#', '^'};
    char bolts[]={'%', '@', '#', '$', '^'};

    int z=0;
    int z1=0;
	    char ch;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n-i;j++)
	        {
                z=(int)nuts[j];
                z1=(int)nuts[j+1];
	            if(z>z1)
	            {
	                char temp=nuts[j];
	                nuts[j]=nuts[j+1];
	                nuts[j+1]=temp;
	            }
	        }
	    }

	   /* for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<n-i;j++)
	        {
	            if((int)bolts[i]>(int)bolts[i+1])
	            {
	                char temp=bolts[i];
	                bolts[i]=bolts[i+1];
	                bolts[i+1]=temp;
	            }
	        }
	    }
        */
	    for(int i=0;i<n;i++)
	    {
	        cout<<nuts[i]<<" ";
	    }
	    cout<<endl;
	   // for(int i=0;i<n;i++)
	   // {
	  //      cout<<bolts[i]<<" ";
	  //  }
	    return 0;
}
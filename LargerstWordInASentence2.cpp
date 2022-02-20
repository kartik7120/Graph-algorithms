#include<iostream>
using namespace std;

    int main()
    {
        int n;
        cout<<"Enter the number of character\n";
        cin>>n;

        cin.ignore(n,'\n');
        char arr[n+1];

        cin.getline(arr,n+1);// will take n character and will terminate when netline i.e. '\n' is recieved

        int count=0;//used to count number of characters 
        int maxlength=0; //stores maximum length of word in the array
        for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;

        for(int i=0;i<=n;i++)
        {
            if(arr[i]!=' '&&arr[i]!='\0')
            count++;
            else
            if(arr[i]==' '||arr[i]=='\0')
            {
                maxlength=max(maxlength,count);
                count=0;
            }

        }
        cout<<maxlength<<endl;
        return 0;
    }
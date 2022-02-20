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
        cout<<"Maximum length of a word"<<maxlength<<endl;
        return 0;
    }
    /*
    Logic of the program :-

    we are making an char (character) array of size n+1 in which we are storing n indivisual characters and at the (n+1)th place
    in the array there will be stored a null character ('\0') so tell us that we reached at the end of the array

    When the character in the array in not a ' '(space or whitespace) or a null character('\0') we will count the no of character
    once the ' ' or '\0' are encountered then store the maximum length of a word (count) in the maxlength variable using max function.
    */
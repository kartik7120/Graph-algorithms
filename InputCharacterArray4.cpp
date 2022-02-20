#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of characters\n";
    cin>>n;
    cout<<"Enter the characters\n";
    char arr[n+1];
    cin.ignore(n,'\n');// this object ignores any value assigned to it
    cin.getline(arr,n);// helps to take input in a sentence 
    cout<<arr;
    return 0;
}
// Explanation of cin.ignore and how it works
/*
You're thinking about this the wrong way. You're thinking in logical steps each time cin or getline is used. Ex. First ask for a number, then ask for a name. That is the wrong way to think about cin. So you run into a race condition because you assume the stream is clear each time you ask for a input.

If you write your program purely for input you'll find the problem:

void main(void)
{
    double num;
    string mystr;

    cin >> num;
    getline(cin, mystr);

    cout << "num=" << num << ",mystr=\'" << mystr << "\'" << endl;
}
In the above, you are thinking, "first get a number." So you type in 123 press enter, and your output will be num=123,mystr=''. Why is that? It's because in the stream you have 123\n and the 123 is parsed into the num variable while \n is still in the stream. Reading the doc for getline function by default it will look in the istream until a \n is encountered. In this example, since \n is in the stream, it looks like it "skipped" it but it worked properly.

For the above to work, you'll have to enter 123Hello World which will properly output num=123,mystr='Hello World'. That, or you put a cin.ignore between the cin and getline so that it'll break into logical steps that you expect.

This is why you need the ignore command. Because you are thinking of it in logical steps rather than in a stream form so you run into a race condition.

Take another code example that is commonly found in schools:

void main(void)
{
    int age;
    string firstName;
    string lastName;

    cout << "First name: ";
    cin >> firstName;

    cout << "Last name: ";
    cin >> lastName;

    cout << "Age: ";
    cin >> age;

    cout << "Hello " << firstName << " " << lastName << "! You are " << age << " years old!" << endl;
}
The above seems to be in logical steps. First ask for first name, last name, then age. So if you did John enter, then Doe enter, then 19 enter, the application works each logic step. If you think of it in "streams" you can simply enter John Doe 19 on the "First name:" question and it would work as well and appear to skip the remaining questions. For the above to work in logical steps, you would need to ignore the remaining stream for each logical break in questions.

Just remember to think of your program input as it is reading from a "stream" and not in logical steps. Each time you call cin it is being read from a stream. This creates a rather buggy application if the user enters the wrong input. For example, if you entered a character where a cin >> double is expected, the application will produce a seemingly bizarre output.

*/
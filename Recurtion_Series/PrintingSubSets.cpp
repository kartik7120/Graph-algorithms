// Input and Output meathod Question 1
#include <iostream>
#include <string>
using namespace std;

void PrintingSubsets(string output, string input)
{
    if (input.length() == 0)
    {
        cout << output << " ";
        return;
    }

    string output1 = output; // decision not taken
    string output2 = output + input[0];

    input.erase(input.begin()); // making the input smaller
    // PrintingSubsets(out)
    PrintingSubsets(output1, input);
    PrintingSubsets(output2, input);
}

int main()
{
    string input;
    cin >> input;
    string output = "";
    PrintingSubsets(output, input);
    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    int counthour=1;
    int row_start = 0;
    int row_end = 3 - 1;
    int col_start = 0;
    int col_end = 3 - 1;
    int sum = 0;
    int d = 0; //indicator for skiping the element
    int maxsum = 0;

    int finalhour=0;

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {

            while (row_start <= row_end || col_start <= col_end)
            {
                
                //for first row
                for (int col = 0; col <= col_end; col++)
                {
                    sum += arr[row_start][col];
                }
                row_start++;
                //for first column
                for (int row = row_start; row <= row_end; row++)
                {
                    if (d == 0)
                        continue;
                    else
                        sum += arr[row][col_end];
                    d++;
                }
                d = 0;
                col_end--;
                //for last row
                for (int col = col_end; col >= col_start; col--)
                {
                    sum += arr[row_end][col];
                }
                row_end--;
                //for last column
                for (int row = row_end; row >= row_start; row--)
                {
                    if (d == 0)
                        continue;
                    else
                        sum += arr[row][col_start];
                    d++;
                }
                col_start++;
                d = 0;
            }
            sum=sum+arr[row_start+1][col_start+1];
            maxsum += max(maxsum, sum);
            sum = 0;
            row_start++;row_end++;
            counthour++;
            if(counthour==4)
            break;
        }
        col_start++;
        col_end++;
        row_start=0;row_end=2;
        counthour=0;
        finalhour++;
        if(finalhour==4)
        break;
    }
    return 0;
}
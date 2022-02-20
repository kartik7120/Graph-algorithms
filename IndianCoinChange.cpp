#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> coins;
    coins.push_back(2000);
    coins.push_back(500);
    coins.push_back(200);
    coins.push_back(100);
    coins.push_back(50);
    coins.push_back(20);
    coins.push_back(10);
    coins.push_back(5);
    coins.push_back(2);
    coins.push_back(1);

    int n;
    cin >> n;

    int temp = n;
    int sum = 0;
    int count = 0;
    while (temp != 0)
    {
        for (int i = 0; i < coins.size(); i++)
        {
            if (coins[i] <= temp)
            {
                sum += coins[i];
                count++;
                temp = temp - coins[i];
                break;
            }
        }
        if (sum == n)
            break;
    }

    cout << count << '\n';

    return 0;
}
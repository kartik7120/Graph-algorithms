#include <iostream>
using namespace std;

int BoardGame(int n, int st, int en)
{
    if (st == en)
    {
        return 1;
    }
    if(st>en)
    return 0;

    int count=0;
    for(int i=1;i<=6;i++)
    {
       count+= BoardGame(n,st+i,en);
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number of ways of the board game\n";
    cin >> n;
    cout << "Enter the starting point and the ending point\n"; int st, en;
    cin >> st >> en;
    int ans=BoardGame(n, st, en);

    cout<<ans<<endl;
    return 0;
}
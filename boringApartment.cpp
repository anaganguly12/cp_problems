#include <bits/stdc++.h>
using namespace std;
// 1433A
void solve()
{
    int x;
    cin >> x;

    int digit = 0, last;
    while (x > 0)
    {
        last = x % 10;
        digit++;
        x = x / 10;
    }

    if (digit == 4)
    {
        cout << (last - 1) * 10 + 10 << endl;
    }
    else if (digit == 3)
    {
        cout << (last - 1) * 10 + 6 << endl;
    }
    else if (digit == 2)
    {
        cout << (last - 1) * 10 + 3 << endl;
    }
    else if (digit == 1)
    {
        cout << (last - 1) * 10 + 1 << endl;
    }
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}
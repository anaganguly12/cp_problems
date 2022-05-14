#include <bits/stdc++.h>
using namespace std;
// 1244A ->
void solve()
{
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;

    int x, y;
    x = (a + c - 1) / c;
    y = (b + d - 1) / d;

    if ((x + y) > k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << x << " " << y << endl;
    }
}
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r;

    cin >> k >> r;
    int x = 2, ans = 1, copyk = k;
    while (true)
    {
        if (copyk % 10 == 0)
        {
            cout << ans << endl;
            break;
        }
        if (copyk % 10 == r)
        {
            cout << ans << endl;
            break;
        }
        copyk = k * x;
        ans++;
        x++;
    }
}
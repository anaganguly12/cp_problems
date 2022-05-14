#include <bits/stdc++.h>
using namespace std;
// 34A ->
int main()
{
    int n;
    cin >> n;

    int a[101];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mn = INT_MAX;
    int diff = abs(a[0] - a[n - 1]);
    mn = min(mn, diff);

    int ans1 = 1, ans2 = n;

    for (int i = 0; i < n; i++)
    {
        diff = abs(a[i] - a[i + 1]);

        if (diff < mn)
        {
            mn = diff;
            ans1 = i + 1;
            ans2 = i + 2;
        }
    }

    cout << ans1 << " " << ans2 << endl;
}
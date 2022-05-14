#include <bits/stdc++.h>
using namespace std;
// 1417A ->
typedef long long ll;
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll a[n];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    ll ans = 0;

    ll min = min_element(a + 1, a + n + 1) - a;

    for (ll i = 1; i <= n; i++)
    {
        if (i != min)
        {
            while ((a[i] + a[min]) <= k)
            {
                a[i] = a[i] + a[min];
                ans++;
            }
        }
    }
    cout << ans << endl;
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
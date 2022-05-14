#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 1358A
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll mul = n * m;
        ll ans = (mul / 2) + (mul % 2);

        cout << ans << endl;
    }
}
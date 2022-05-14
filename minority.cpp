#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve()
{
    string s;
    cin >> s;
    map<int, int> mp;
    ll maxi = 0;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i] - '0']++;
    }
    if (mp[0] != mp[1])
        cout << min(mp[0], mp[1]) << endl;
    else
        cout << mp[1] - 1 << endl;
}
int main()
{
    ll tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}
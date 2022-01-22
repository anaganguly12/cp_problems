#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, m;
        cin >> h >> m;

        int total = 24 * 60;

        int ans = total - ((h * 60) + m);
        cout << ans << endl;
    }
}
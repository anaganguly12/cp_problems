#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, x;
        cin >> n >> m >> x;
        x--;
        ll col, row;

        col = x / n;
        row = x % n;

        cout << row * m + col + 1 << endl;
    }
}
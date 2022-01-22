#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, maxn = 0;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        maxn = max(maxn, a[i]);
    }

    int m, maxm = 0;
    cin >> m;

    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
        maxm = max(maxm, b[i]);
    }

    cout << maxn << " " << maxm << endl;
}
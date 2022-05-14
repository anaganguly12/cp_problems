#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int tc;
    cin >> tc;

    while (tc--)
    {
        long long int u, v;
        cin >> u >> v;

        long long int x, y;
        x = u * u;
        y = -v * v;
        cout << x << " " << y << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 900A
int main()
{
    ll n;
    cin >> n;

    ll x, y;
    ll plus = 0, minus = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        if (x > 0)
        {
            plus++;
        }
        else
        {
            minus++;
        }
    }

    if ((plus < 2) || (minus < 2))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
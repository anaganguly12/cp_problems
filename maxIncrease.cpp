#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin >> n;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll c = 1, max = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            c++;
        }
        else
        {
            if (c > max)
            {
                max = c;
            }
            c = 1;
        }
    }

    if (c > max)
    {
        max = c;
    }

    cout << max << endl;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 1368A
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;

        int c = 0;
        while ((a <= n) && (b <= n))
        {
            if (a > b)
            {
                b += a;
                c++;
            }
            else
            {
                a += b;
                c++;
            }
        }

        cout << c << endl;
    }
}
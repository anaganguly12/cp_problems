#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans = 0;
        cin >> n;

        for (int i = 1; i <= n; i = i * 10 + 1)
        {
            for (int k = 1; k <= 9; k++)
            {
                if (i * k <= n)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
// 1561A
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        vector<int> ss(n);

        for (int i = 0; i < n; i++)
        {
            cin >> ss[i];
        }

        int ans = 0;

        while (!is_sorted(ss.begin(), ss.end()))
        {
            for (int i = ans % 2; i + 1 < n; i += 2)
            {
                if (ss[i] > ss[i + 1])
                {
                    swap(ss[i], ss[i + 1]);
                }
            }

            ans += 1;
        }

        cout << ans << endl;
    }
}
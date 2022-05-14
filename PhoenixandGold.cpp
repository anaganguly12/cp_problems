#include <bits/stdc++.h>
using namespace std;
// 1515A
int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n, x;
        cin >> n >> x;

        int total = 0;
        int a[101];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        if (total == x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for (int i = 0; i < n; i++)
            {
                if (x == a[i])
                {
                    swap(a[i], a[i + 1]);
                }
                cout << a[i] << " ";
                x -= a[i];
            }
            cout << "\n";
        }
    }
}

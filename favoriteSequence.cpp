#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        for (int i = 0; i < (n / 2); i++)
        {

            cout << v[i] << ' ' << v[n - i - 1] << ' ';
        }
        if (n % 2 != 0)
        {
            cout << v[n / 2];
        }
        cout << "\n";
    }

    return 0;
}

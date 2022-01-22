#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, y, count = 0;
        cin >> n;

        for (int i = 0; i < (2 * n); i++)
        {
            cin >> y;
            if (y % 2 != 0)
            {
                count++;
            }
        }

        if (count == n)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
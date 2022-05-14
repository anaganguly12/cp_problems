#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, val = 1, l = -1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (val == -1)
            {
                continue;
            }
            if (x == 1)
            {
                if (l == 1)
                {
                    val += 5;
                }
                else
                {
                    val += 1;
                }
            }
            else if (l == 0)
            {
                val = -1;
            }
            l = x;
        }
        cout << val << endl;
    }
}
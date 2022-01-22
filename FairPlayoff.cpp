#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int a, b, c, d;

    while (t--)
    {
        cin >> a >> b >> c >> d;

        int hs1 = (a > b ? a : b);
        int f1 = (a > b ? b : a);
        int hs2 = (c > d ? c : d);
        int f2 = (c > d ? d : c);

        if ((hs1 < f2) || (hs2 < f1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
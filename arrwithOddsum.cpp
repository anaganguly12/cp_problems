#include <bits/stdc++.h>
using namespace std;
// 1296A
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        int sum = 0;
        bool even = false, odd = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            even |= a[i] % 2 == 0;
            odd |= a[i] % 2 != 0; // |= is same as += operator
        }

        if ((sum % 2 != 0) || (even && odd))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
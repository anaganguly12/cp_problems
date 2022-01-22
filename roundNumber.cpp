#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, rem = 0, d = 0, arr[100000];
        cin >> n;

        if (n >= 1000)
        {
            rem = n % 1000;
            arr[d++] = n - rem;
            n %= 1000;
        }

        if (n >= 100)
        {
            rem = n % 100;
            arr[d++] = n - rem;
            n %= 100;
        }

        if (n >= 10)
        {
            rem = n % 10;
            arr[d++] = n - rem;
            n %= 10;
        }

        if (n < 10 && n > 0)
        {
            arr[d++] = n;
        }

        vector<int> v;
        for (int i = 0; i < d; i++)
        {
            v.push_back(arr[i]);
        }

        cout << v.size() << endl;

        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << ' ';
        }
        cout << "\n";
    }
}

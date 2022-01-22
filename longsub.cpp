#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {

            if (v[i + 1] == v[i])
            {

                count++;
            }
        }
        cout << n - count << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
// a,b,c  ---->  x = max(a,b), y = max(a,c), z = max(b,c)  3 2 3 => 2 3 3 => 2 2 3
// 1385A
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> a(3);
        for (auto &it : a)
            cin >> it;

        sort(a.begin(), a.end());

        if (a[1] != a[2])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << a[0] << " " << a[0] << " " << a[2] << endl;
        }
    }
}
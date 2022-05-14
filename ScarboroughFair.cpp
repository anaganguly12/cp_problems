#include <bits/stdc++.h>
using namespace std;
// 897A ->
int main()
{
    int n, m;
    cin >> n >> m;

    string s, c1, c2;
    cin >> s;

    int l, r;

    while (m--)
    {
        cin >> l >> r >> c1 >> c2;

        for (int i = l - 1; i < r; i++)
        {
            if (s[i] == c1[0])
            {
                s[i] = c2[0];
            }
        }
    }

    cout << s << endl;
}
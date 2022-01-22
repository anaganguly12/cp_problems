#include <bits/stdc++.h>
using namespace std;
void fix()
{
    int n, m, answer = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char s;
            cin >> s;
            if (s == 'C')
            {
                continue;
            }
            if (i == n && s == 'D')
            {
                answer++;
            }
            if (j == m && s == 'R')
            {
                answer++;
            }
        }
    }
    cout << answer << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        fix();
    }
}
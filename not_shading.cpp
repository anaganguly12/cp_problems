#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, r, c;
        cin >> n >> m >> r >> c;

        char grid[n + 1][m + 1];
        bool exist = false;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> grid[i][j];
                if (grid[i][j] == 'B')
                {
                    exist = true;
                }
            }
        }

        if (!exist)
        {
            cout << "-1\n";
        }
        else if (grid[r][c] == 'B')
        {
            cout << "0\n";
        }
        else
        {
            exist = false;
            for (int i = 1; i <= n; i++)
            {
                if (grid[i][c] == 'B')
                {
                    exist = true;
                }
            }
            for (int j = 1; j <= m; j++)
            {
                if (grid[r][j] == 'B')
                {
                    exist = true;
                }
            }
            if (exist)
            {
                cout << "1\n";
            }
            else
            {
                cout << "2\n";
            }
        }
    }
}
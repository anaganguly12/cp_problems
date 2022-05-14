#include <bits/stdc++.h>
using namespace std;
// 1620A
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'N')
            {
                c++;
            }
        }

        if (c == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        bool flag = 0;
        int mid;
        mid = (s.length() - 1) / 2;
        for (int i = 0; i <= ((s.length() - 1) / 2); i++)
        {
            if (s[i] == s[mid + 1])
            {
                mid++;
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }

        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}
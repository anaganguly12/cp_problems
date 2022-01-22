#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0;
    string s1;
    for (int i = 0; i < 5; i++)
    {
        cin >> s1;
        if ((s[0] == s1[0]) || (s[1] == s1[1]))
        {
            ans++;
        }
    }
    if (ans > 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
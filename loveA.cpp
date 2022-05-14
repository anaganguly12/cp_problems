#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int acount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            acount++;
        }
    }
    int total = s.size(), ans = ((2 * acount) - 1);
    cout << min(total, ans) << endl;
}
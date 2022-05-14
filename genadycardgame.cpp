#include <bits/stdc++.h>
using namespace std;
// 1097A
int main()
{
    string s, s1;
    cin >> s;
    bool flag = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> s1;
        if (s[0] == s1[0] || s[1] == s1[1])
        {
            cout << "YES" << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "NO" << endl;
    }
}
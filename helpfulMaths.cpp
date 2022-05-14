#include <bits/stdc++.h>
using namespace std;
// 339A
int main()
{
    string s;
    cin >> s;
    int a[101];
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            a[c++] = s[i] - '0';
        }
    }
    sort(a, a + c);
    for (int i = 0; i < c; i++)
    {
        cout << a[i];
        if (i == c - 1)
        {
            break;
        }
        cout << '+';
    }
}
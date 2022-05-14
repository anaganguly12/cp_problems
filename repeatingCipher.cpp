#include <bits/stdc++.h>
using namespace std;
// 1095A
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0;
    int p = 1;
    while (i < n)
    {
        cout << s[i];
        i += p;
        p++;
    }
}
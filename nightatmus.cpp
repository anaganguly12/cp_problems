#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int sum = 0;
    char start = 'a';
    for (int i = 0; i < s.size(); i++)
    {
        int m = abs(s[i] - start);
        int n = 26 - abs(m);
        sum += min(m, n);
        start = s[i];
    }

    cout << sum << endl;
}
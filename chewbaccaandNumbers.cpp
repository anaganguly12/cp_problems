#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main()
{
    cin >> s;
    ll leng = s.size();

    int first = s[0] - '0';

    if (first == 9)
    {
        s[0] = '9';
    }
    else
    {
        if (first > 4)
        {
            s[0] = (9 - first) + '0';
        }
    }

    for (ll i = 1; i < leng; i++)
    {
        int x = s[i] - '0';
        if (x < 5)
        {
            continue;
        }
        else
        {
            s[i] = (9 - x) + '0';
        }
    }

    cout << s << endl;
}
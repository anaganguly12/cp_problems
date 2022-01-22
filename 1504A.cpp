#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    string p = s;
    reverse(p.begin(), p.end());

    if (s == p)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        if (!isPalindrome('a' + s))
        {
            cout << "YES\n"
                 << 'a' << s << endl;
        }
        else if (!isPalindrome(s + 'a'))
        {
            cout << "YES\n"
                 << s << 'a' << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

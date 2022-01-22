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

        int count = 0, count1 = 0, count2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
            {
                count++;
            }
            if (s[i] == 'B')
            {
                count1++;
            }
            if (s[i] == 'C')
            {
                count2++;
            }
        }
        if (count == 1 && count1 == 1 && count2 == 1)
        {
            cout << "NO" << endl;
        }
        else if (((count + count2) == count1) || (count == count1) || (count1 == count2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

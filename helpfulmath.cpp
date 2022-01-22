#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int length = s.size();
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < (length - i - 1); j++)
        {
            if (s[j] != '+')
            {
                if (s[j] > s[j + 2])
                {
                    char temp = s[j];
                    s[j] = s[j + 2];
                    s[j + 2] = temp;
                }
            }
        }
    }

    cout << s << endl;
}
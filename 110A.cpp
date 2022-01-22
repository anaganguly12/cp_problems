#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s;
    cin >> s;
    int count = 0;

    while (s != 0)
    {
        if ((s % 10 == 4) || (s % 10 == 7))
        {
            count++;
        }
        s /= 10;
    }
    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
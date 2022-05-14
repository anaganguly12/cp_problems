#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll tc;
    cin >> tc;

    while (tc--)
    {
        ll n;
        cin >> n;
        ll copyn = n;
        ll last, co = 0, count = 0;
        while (n > 0)
        {
            last = n % 10;
            count++;
            if (last == 0)
            {
                co++;
            }
            n = n / 10;
        }
        cout << count - co << endl;
        ll lastdig, c = 0;
        while (copyn > 0)
        {
            lastdig = copyn % 10;

            if (lastdig != 0)
            {
                cout << lastdig * pow(10, c) << " ";
            }
            c++;
            copyn = copyn / 10;
        }
        cout << endl;
    }
}
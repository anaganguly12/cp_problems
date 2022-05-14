#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 492A
int main()
{
    ll n;
    cin >> n;

    ll currSum = 0, lastSum = 0;
    ll c = 0;

    while (n > 0)
    {
        c++;
        currSum = lastSum + c;
        lastSum = currSum;
        n = n - currSum;
        if (n < 0)
        {
            c--;
        }
    }

    cout << c << endl;
}
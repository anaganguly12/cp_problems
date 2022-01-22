#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int lastDigit;
    int copyn = n;

    for (int i = 1; i <= k; i++)
    {
        lastDigit = (n % 10);
        if (lastDigit == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
}
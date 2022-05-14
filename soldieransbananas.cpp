#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, w;
    cin >> k >> n >> w;
    long long sum = 0, ans;
    for (int i = 1; i <= w; i++)
    {
        ans = k * i;
        sum += ans;
    }
    if (n >= sum)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << sum - n << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    ll drink = (k * l) / nl;
    ll slice = c * d;
    ll salt = p / np;

    cout << (min(min(drink, slice), salt)) / n << endl;
}
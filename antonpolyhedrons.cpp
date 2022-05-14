#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
// 785A
int main()
{
    ll n;
    cin >> n;

    ll sum = 0;
    unordered_map<string, int> mp;
    mp["Tetrahedron"] = 4;
    mp["Cube"] = 6;
    mp["Octahedron"] = 8;
    mp["Dodecahedron"] = 12;
    mp["Icosahedron"] = 20;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        sum += mp[s];
    }

    cout << sum << endl;
}
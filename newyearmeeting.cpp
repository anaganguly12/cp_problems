#include <bits/stdc++.h>
using namespace std;
// 723A
int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    cout << max(max(x1, x2), x3) - min(min(x1, x2), x3) << endl;
}
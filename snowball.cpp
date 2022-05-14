#include <bits/stdc++.h>
using namespace std;
// 1099A ->
int main()
{
    int w, h;
    int u1, d1;
    int u2, d2;

    cin >> w >> h;
    cin >> u1 >> d1;
    cin >> u2 >> d2;

    for (int i = h; i >= 0; i--)
    {
        w += i;
        if (i == d1)
        {
            w = max(w - u1, 0);
        }
        if (i == d2)
        {
            w = max(w - u2, 0);
        }
    }

    cout << w << endl;
}
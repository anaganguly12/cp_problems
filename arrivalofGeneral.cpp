#include <bits/stdc++.h>
using namespace std;
// 144A
int main()
{
    int n;
    cin >> n;

    int a[100], mx = 0, mn = 101, mxpos, mnpos;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            mxpos = i;
        }
        if (a[i] <= mn)
        {
            mn = a[i];
            mnpos = i;
        }
    }
    if (mxpos > mnpos)
    {
        mnpos++;
    }
    cout << mxpos + (n - 1 - mnpos) << endl;
}
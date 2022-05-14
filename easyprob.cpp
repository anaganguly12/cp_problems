#include <bits/stdc++.h>
using namespace std;
// 1030A
int main()
{
    int n;
    cin >> n;
    int zero = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            zero++;
        }
    }

    if (zero == n)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
// 136A
int main()
{
    int n;
    cin >> n;

    int p[n], gift;

    for (int i = 1; i <= n; i++)
    {
        cin >> gift;
        p[gift] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " ";
    }
    cout << endl;
}
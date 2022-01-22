#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while (true)
    {
        y += 1;
        int u = y / 1000;
        int v = y / 100 % 10;
        int w = y / 10 % 10;
        int x = y % 10;

        if ((u != v) && (u != w) && (u != x) && (v != w) && (v != x) && (w != x))
        {
            break;
        }
    }
    cout << y << endl;
}
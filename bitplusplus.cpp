#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if ((s == "X++") || (s == "++X"))
        {
            sum += 1;
        }
        else if ((s == "X--") || (s == "--X"))
        {
            sum -= 1;
        }
    }

    cout << sum << endl;
}
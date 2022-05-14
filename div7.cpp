#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;

        int div, mul;
        if (n % 7 == 0)
        {
            cout << n << endl;
        }
        else
        {
            div = n / 10;
            mul = div * 10;

            for (int i = 0; i <= 9; i++)
            {
                if ((mul + i) % 7 == 0)
                {
                    cout << mul + i << endl;
                    break;
                }
            }
        }
    }
}
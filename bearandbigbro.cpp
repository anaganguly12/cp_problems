#include <bits/stdc++.h>
using namespace std;
// 791A
int main()
{
    int a, b;
    cin >> a >> b;
    int c = 0;
    if (a > b)
    {
        cout << a << endl;
    }
    else
    {
        for (int i = 1; i <= 10; i++)
        {

            a = a * 3;
            b = b * 2;
            c++;
            if (a > b)
            {
                cout << c << endl;
                break;
            }
        }
    }
}
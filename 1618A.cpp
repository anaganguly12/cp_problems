#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<int> b;

        for (int i = 0; i < 7; i++)
        {
            int x;
            cin >> x;

            b.push_back(x);
        }
        cout << b[0] << " " << b[1] << " " << b[6] - b[0] - b[1] << endl;
    }
}
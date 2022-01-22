#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0, end = 0, curr = 0;
    cin >> n;

    while (n > 0)
    {
        sum++;
        curr = end + sum;
        end = curr;
        n -= curr;
        if (n < 0)
        {
            sum--;
        }
    }
    cout << sum << endl;

    return 0;
}
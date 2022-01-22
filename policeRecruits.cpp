#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n], ans = 0, currp = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
        {
            currp += arr[i];
        }
        else
        {
            if (currp < 1)
            {
                ans++;
            }
            else
            {
                --currp;
            }
        }
    }
    cout << ans << endl;
}
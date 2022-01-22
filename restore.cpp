#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4];
    int max = INT_MIN;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    int a;
    for (int i = 0; i < 4; i++)
    {
        if ((max - arr[i]) != 0)
        {
            a = max - arr[i];
            cout << a << ' ';
        }
    }
    cout << "\n";
}
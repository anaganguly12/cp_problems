#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10][10], r = 0, c = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                r = i;
                c = j;
                break;
            }
        }
    }

    cout << abs(3 - r) + abs(3 - c) << endl;
}
#include <bits/stdc++.h>
using namespace std;
int arr[16] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

int main()
{
    int n, m, c = 0;
    cin >> n >> m;
    for (int i = 0; i < 15; i++)
    {
        if (n == arr[i] && m == arr[i + 1])
        {
            c++;
            break;
        }
    }
    if (c == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}
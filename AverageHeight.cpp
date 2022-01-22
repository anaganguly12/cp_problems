#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void photogenic()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    partition(v.begin(), v.end(), [&](const int u)
              { return u % 2; });

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " \n"[i == n - 1];
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        photogenic();
    }
    return 0;
}

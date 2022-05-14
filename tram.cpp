#include <bits/stdc++.h>
using namespace std;
// 116A
int main()
{
    int n;
    cin >> n;

    int a[n], b[n];
    int ans = 0, final_ans = 0, capacity = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        ans += b[i];
        final_ans = ans - a[i];
        capacity = max(capacity, final_ans);
        ans = final_ans;
    }

    cout << capacity << endl;
}
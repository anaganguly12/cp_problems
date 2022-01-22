#include <stdio.h>
int main()
{
    int n, ans = 0;
    char s[4];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", s);
        if (s[1] == '+')
            ans++;
        else
            ans--;
    }
    printf("%d", ans);

    return 0;
}
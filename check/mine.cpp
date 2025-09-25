#include <bits/stdc++.h>

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int a, b, ans = 0;

    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a; ++i)
        ans++;
    for (int i = 1; i <= b; ++i)
        ans++;
    
    printf("%d\n", ans);

    return 0;
}

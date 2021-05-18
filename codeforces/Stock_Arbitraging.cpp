#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,r,sell = 0,buy = 1e8,x;
    scanf("%d %d %d", &n, &m, &r);

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        if(x < buy)
            buy = x;
    }
    for(int i=1; i<=m; i++)
    {
        scanf("%d", &x);
        if(x > sell)
            sell = x;
    }

    int have = r / buy;

    int res = max(r, ( (sell * have) + (r%buy) ) );

    printf("%d\n", res);

    return 0;
}

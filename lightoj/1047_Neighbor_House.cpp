/*
2
4
13 23 12
77 36 64
44 89 76
31 78 45

3
26 40 83
49 60 57
13 89 99
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int n;
int dp[25][5];
int cost[25][5];

int sol(int i, int color)
{
    if(i > n)return 0;
    if(dp[i][color] != -1)
        return dp[i][color];

    ll a,b;

    if(color == 1)
    {
        a = cost[i][2] + sol(i+1,2);
        b = cost[i][3] + sol(i+1,3);
    }
    else if(color == 2)
    {
        a = cost[i][1] + sol(i+1, 1);
        b = cost[i][3] + sol(i+1, 3);
    }
    else if(color == 3)
    {
        a = cost[i][1] + sol(i+1, 1);
        b = cost[i][2] + sol(i+1, 2);
    }

    return dp[i][color] = min(a,b);

}

int main()
{
    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        scanf("%d", &n);

        for(int i=1; i<=n; i++)
        {
            scanf("%d %d %d", &cost[i][1], &cost[i][2], &cost[i][3]);

            memset(dp, -1, sizeof(dp));
        }

        ll res;
        for(int i=1; i<=3; i++)
        {
            res = sol(0,i);
        }

        printf("Case %d: %d\n", T, res);

    }

    return 0;
}

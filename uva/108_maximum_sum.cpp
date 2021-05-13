#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int a[105][105];
int sum[105][105];
int res[105];


int sol(int n)
{
    int ans = -1e9;

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j<=n; j++)
        {
            for(int k=1; k<=n; k++)
            {
                res[k+1] = max( (sum[k][j+1] - sum[k][i] + res[k]), (sum[k][j+1] - sum[k][i]) );
                ans = max(ans, res[k+1]);
            }
        }
    }

    return ans;
}

int main()
{
    //freopen("input.txt", "w", stdin);

    int n;

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            scanf("%d", &a[i][j]);

    for(int i=1; i<=n; i++)
        for(int j=2; j<=n+1; j++)
            sum[i][j] = sum[i][j-1] + a[i][j-1];

    int r = sol(n);

    printf("%d\n", r);

    return 0;
}
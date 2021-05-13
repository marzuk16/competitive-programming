/*
2

3 5

1 2 5 3 2 1

4 20

1 2 3 4 8 4 2 1
*/

#include<bits/stdc++.h>
using namespace std;

#define mod 100000007

int n,k;
int mem[55][1005];
int a[55],c[55];

int result(int i, int sum)
{
    long long int ans=0;

    if(sum == k)
        return 1;
    if(i > n || sum > k)
        return 0;
    if(mem[i][sum] != -1)
        return mem[i][sum];

    for (int j = 0; j <= c[i]; j++)
    {
        ans += result(i+1, sum+(j*a[i]));
        ans = ans % mod;
    }

    //cerr<<"["<<i<<"]["<<sum<<"]=" <<ans<<endl;
    return mem[i][sum] = ans;
}

int main()
{
    int test;
    scanf("%d", &test);

    for(int T = 1; T <= test; T++)
    {
        scanf("%d %d", &n, &k);
        memset(mem, -1, sizeof(mem));

        for(int i = 1; i <= n; i++)
            scanf("%d", &a[i]);
        for(int i = 1; i <= n; i++)
            scanf("%d", &c[i]);

        int res=result(1,0);

        printf("Case %d: %d\n", T, res);
    }

    return 0;
}

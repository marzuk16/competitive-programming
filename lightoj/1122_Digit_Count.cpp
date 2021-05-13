#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int m,n;
vector<int>digits;
int state[15][15];

int sol(int i, int digit)
{
    if(i == n)
        return 1;

    if(state[i][digit])
        return state[i][digit];

    int cnt = 0;

    for(int j=0; j<m; j++)
        if( !digit || abs(digits[j] - digit) <= 2)
            cnt += sol(i+1, digits[j]);

    return state[i][digit] = cnt;
}

int main()
{
    //freopen("input.txt", "w", stdin);
    //freopen("output.txt", "r", stdout);

    int test;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        digits.clear();
        memset(state, 0, sizeof(state));
        int x;
        scanf("%d %d", &m, &n);

        for(int i=1; i<=m; i++)
        {
            scanf("%d", &x);
            digits.push_back(x);
        }

        int res = sol(0,0);

        printf("Case %d: %d\n", T, res);
    }
    return 0;
}

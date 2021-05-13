#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int sol(int n)
{
    int res = (n/3)*2;
    if(n%3 == 2)
        res ++;

    return res;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int test;
    scanf("%d",&test);
    for(int T=1; T<=test; T++)
    {
        int a,b;
        scanf("%d %d", &a, &b);
        int res = sol(b) - sol(a-1);
        printf("Case %d: %d\n", T, res);
    }
    return 0;
}

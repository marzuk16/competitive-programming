#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long
#define M 1000000007

lld sol(int x, int n)
{
    lld res;
    if( !n)
        return 1;
    if(n%2)
        return (x%M * sol(x, n-1) )%M;
    else
    {
        res = sol(x, n/2);

        return (res*res)%M;

    }
}

int main()
{
    //freopen("input.txt", "w", stdin);

    int x,n;
    scanf("%d %d", &x, &n);

    printf("%lld\n", sol(x,n));
    return 0;
}

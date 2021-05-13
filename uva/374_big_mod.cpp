#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

lld sol(lld b, lld p, lld m)
{
    lld n;
    if(!p)
        return 1;
    if(p%2)
        return (b%m * sol(b, p-1, m))%m;
    else
    {
        n = sol(b, p/2, m);
        return (n*n)%m;
    }
}

int main()
{
    //freopen("input.txt", "w", stdin);

    lld b,p,m;
    while(cin>>b>>p>>m)
    {
        printf("%lld\n", sol(b,p,m));
    }
    return 0;
}
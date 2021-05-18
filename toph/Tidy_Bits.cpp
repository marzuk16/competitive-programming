#include<bits/stdc++.h>
using namespace std;

#define lld long long int

lld res(int cnt)
{
    lld x = 1;
    for(int i=1; i<=cnt; i++)
    {
        x *= 2;
    }

    return x;
}
int main()
{
    int a;
    scanf("%d", &a);

    int cnt = 0;
    while (a > 0)
    {
        int x = a % 2;
        if( x )
            cnt++;
        a /= 2;
    }
    printf("%lld\n", res(cnt)-1);

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

lld sol(int n, int m)
{
    lld a[55];
    lld x,y,sum;
    stack<int> s;

    scanf("%lld %lld", &x, &y);

    y %= n;
    lld bit = 0;

    while(x)
    {
        s.push(x%2);
        x /= 2;
        bit++;
    }

    lld restBit = n-bit;
    lld i = 1;

    while(restBit)
    {
        a[i++] = 0;
        restBit--;
    }

    int tmp;
    while(!s.empty())
    {
        tmp = s.top();
        s.pop();
        a[i++] = tmp;
    }

    for(lld i=1; i<=y; i++)
    {
        tmp = a[1];
        for(lld j=1; j<n; j++)
            a[j] = a[j+1];

        a[n] = tmp;
    }

    sum = 0;
    for(lld i=1; i<=n; i++)
        sum += a[n-i+1]*pow(2, i-1);

    return sum;
}

int main()
{
    int n,m;


    while(cin>>n>>m)
        while(m--)
            printf("%lld\n", sol(n,m));


    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int x,cnt = 0;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%lld", &x);
        if( (x%2) )
            cnt++;
    }

    printf("%lld\n", (cnt%2));

    return 0;
}

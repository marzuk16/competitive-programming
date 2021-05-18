#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int q,l,r,d;

    scanf("%lld", &q);
    while(q--)
    {
        scanf("%lld %lld %lld", &l, &r, &d);

        if(d<l)
            printf("%lld\n",d);
        else
        {
            long long int x = r/d;
            printf("%lld\n", (d*(x+1)));
        }
    }

    return 0;
}

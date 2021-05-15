#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if(!b)
        return a;
    return gcd(b, a%b);
}

int euclid(int a, int m)
{
    int r1 = a;
    int r2 = m;
    int t1 = 0;
    int t2 = 1;

    while(r2 > 0)
    {
        int q = r1/r2;
        int r = r1 - (q*r2);
        r1 = r2;
        r2 = r;

        int t = t1 - (q*t2);
        t1 = t2;
        t2 = t;
    }

    if(t1 < 0)
        return (a+t1);
    else
        return t1;
}

int main()
{
    int test,a,m;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d", &a, &m);

        if( gcd(a,m) == 1 )
        {
            int x = euclid(m,a);
            printf("%d\n", x);

        }
        else
            printf("Not Exist\n");
    }
}

#include<bits/stdc++.h>
using namespace std;

long long int absolute(long long int a, long long int b)
{
    if(a<b)
        return b-a;
    else
        return a-b;
}

int sol(int q)
{
    if(q==0) return 1 ;
    int c,c1,f=0, flag=0;
    long long int x,y,x1,y1,row,col;

    scanf("%lld %lld %d", &x, &y, &c);

    if(q==1) return 1;

    for(int i=2; i<=q; i++)
    {
        x1 = x;
        y1 = y;
        c1 = c;
        scanf("%lld %lld %d", &x, &y, &c);

        if(flag) continue;

        row = absolute(x1 , x);
        col = absolute(y1 , y);

        if( !row )
        {
            if((col%2) && (c1 != c))
                f=1;
            else if(!(col%2) && (c1 == c))
                f=1;
            else
                f=0;
        }

        if( !col )
        {
            if((row%2) && (c1 != c))
                f=1;
            else if(!(row%2) && (c1 == c))
                f=1;
            else
                f=0;
        }

        if( (row%2 && col%2 && c1 == c) || (!(row%2) && !(col%2) && c1 == c) )
            f=1;
        else if( (!(row%2) && col%2 && c1 != c) || (row%2 && !(col%2) && c1 != c) )
            f=1;
        else
            f=0;

        if(!f) flag=1;
    }

    return f;
}

int main()
{
    int test,q;

    scanf("%d", &test);

    long long int n;

    while(test--)
    {
        scanf("%lld %d",&n, &q);
        int s = sol(q);

        if(s)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}

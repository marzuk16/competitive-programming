#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,m,n,mn,ans,x;

    scanf("%d", &test);

    for(int i=1; i<=test; i++)
    {
        scanf("%d %d", &m, &n);

        mn = m * n;
        if(m==1)
            ans = n;
        else if(n==1)
            ans = m;
        else if( m==2 || n==2)
        {
            if(m==2)
                x=n;
            else
                x=m;
            if(x%4==0)
                ans=x;
            if(x%4==1)
                ans=x+1;
            if(x%4==2)
                ans=x+2;
            if(x%4==3)
                ans=x+1;
        }
        else if(mn%2 == 0)
            ans = mn/2;
        else
            ans = (mn/2)+1;

        printf("Case %d: %d\n", i, ans);
    }
    return 0;
}
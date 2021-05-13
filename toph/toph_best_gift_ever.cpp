#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long int test,n=0,m=0,i,j,k,l,q,mul=1,x,y,z;
    scanf("%ld",&test);
    for(z=1; z<=test; z++)
    {
        scanf("%ld %ld",&n,&m);
        long int a[n+1]={0},b[m+1]={0};
        for(i=1; i<=n; i++)
        {
            scanf("%ld",&a[i]);
            a[i]+=a[i-1];
        }
        for(j=1; j<=m; j++)
        {
            scanf("%ld",&b[j]);
            b[j]+=b[j-1];
        }
        printf("Case %ld:\n",z);
        scanf("%ld",&q);
        while(q--)
        {
            scanf("%ld %ld %ld %ld",&i,&j,&k,&l);

            mul=(a[j]-a[i-1])*(b[l]-b[k-1]);
            printf("%ld\n",mul);
        }
    }

    return 0;
}

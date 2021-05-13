#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f=1,g=2,h,i=0,j=0,n,I,J;

    while(1)
    {
        cin>>n;

        if(n==0) break;
        else
        {
            int ara[n][n];
            for(a=0;  a<n; a++)
            {
                for(b=0; b<n; b++)
                    ara[a][b]=1;
            }
            I=n-1; J=n;
            for(e=0,f=1,g=2;e<I; e++)
            {
                for(c=0,d=f; d<n;d++,c++)
                    ara[c][d]=g;
                f++; g++;
            }
            for(e=0,f=1,g=2;e<I; e++)
            {
                for(c=f,d=0; c<n;d++,c++)
                    ara[c][d]=g;
                f++; g++;
            }
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    if(j==0)
                        printf("%3d",ara[i][j]);
                else printf(" %3d",ara[i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}

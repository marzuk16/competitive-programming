#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j=1,n,p=0,q=0,r;

    while(1)
    {
        cin>>n;

        if(n==0)
        break;

        else
        {
            j=1;p=0;q=0;

            int ara[n][n];
            i=n;
            if(n%2==0)
                r=n/2;
            else if(n%2==1)
                r=(n/2)+1;

            for(c=1; c<=r; c++)
            {
                for(a=p; a<i; a++)
                {
                    for(b=q; b<i; b++)
                        ara[a][b]=j;
                }
                j++;
                p++;
                q++;
                i--;
            }

            for(g=0; g<n; g++)
            {
                for(h=0; h<n; h++)
                {
                    if(h==0)
                        printf("%3d",ara[g][h]);
                    else printf(" %3d",ara[g][h]);
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}

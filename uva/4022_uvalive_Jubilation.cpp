#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c,x,cnt=0;
    while(1)
    {
        scanf("%d",&n);
        cnt++;
        if( !n )
            break;

        int id[n+1];
        int pre[n+1];
        int exp[n+1];

        c=0;

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&id[i]);
        }

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&x);
            pre[x]=i;
        }

        for(int i=1; i<=n; i++)
        {
            scanf("%d",&exp[i]);
        }

        for(int i=1; i<=n; i++)
        {
            if(exp[id[i]] >= i)
            {
                //cerr<<"3"<<" ";
                c+=3;
            }
            else if(i < pre[id[i]])
            {
                //cerr<<"2"<<" ";
                c+=2;
            }
            else
            {
                //cerr<<"1"<<" ";
                c+=1;
            }
        }
        printf("Case %d: %d\n",cnt,c);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;
    long long x,y;

    scanf("%d",&test);

    for(int i=1; i<=test; i++)
    {
        vector<long long int>start;
        vector<long long int>en;

        scanf("%d",&n);
        for(int j=1; j<=n; j++)
        {
            scanf("%lld %lld",&x,&y);
            start.push_back(x);
            en.push_back(y);
        }
        sort(start.begin(),start.end());
        sort(en.begin(),en.end());

        long long int c=0,cnt=0,ans=0;

        for(int j=0; j<n; j++)
        {
            if(start[j]>en[c])
            {
                cnt--;
                c++;
                j--;
            }
            else
                cnt++;

            ans=max(ans,cnt);
        }

        printf("Case %d: %lld\n",i,ans);
    }

    return 0;
}

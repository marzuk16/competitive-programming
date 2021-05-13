#include<bits/stdc++.h>
using namespace std;

#define N 10010
int a[N];

int main()
{
    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        int n,x,f=0;
        scanf("%d", &n);
        //map<int,int>mp;
        memset(a,0,sizeof(a));

        for(int i=0; i<n; i++)
        {
            scanf("%d", &x);
            a[x]++;
//            if(a[i] > n)
//                f = 0;
//            mp[x]++;
//            if(mp[x] > 2)
//                f = 0;
        }
        for(int i=1; i<=n; i++)
        {
            if(a[n-i])
				a[n-i]--;
			else if(a[i-1])
				a[i-1]--;
			else
			{
				f = 1;
				break;
			}
        }
        if(f)
            printf("Case %d: no\n", T);
        else
            printf("Case %d: yes\n", T);
    }

    return 0;
}
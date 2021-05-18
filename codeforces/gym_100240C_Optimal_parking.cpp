#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    for(int T=1;T<=t;T++)
    {
        int n;
        scanf("%d",&n);
        int a[n];

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        int sum=0;

        for(int i=1;i<n;i++)
        {
            sum+=a[i]-a[i-1];
        }

        printf("%d\n",sum*2);
    }

    return 0;
}
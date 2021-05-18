#include<iostream>
#include<stdio.h>
#include<algorithm>

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

        for(int i=n-3;i>=0;i=i-3)
        {
            if(i>=0)
            {
                sum+=a[i];
            }
        }
        printf("%d\n",sum);
    }

    return 0;
}
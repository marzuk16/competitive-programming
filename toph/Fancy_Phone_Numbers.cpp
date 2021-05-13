#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[50];
        int i,c,j;
        long long int ans=1;
        scanf("%s",a);
        i=0;
        j=strlen(a);

        while(i<j)
        {    c=0;

            while(a[i+1]==a[i])
            {
                c++;
                i++;
            }
            ans=ans * pow(2,c);
            i++;
        }
        printf("%lld\n",ans);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n;

    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        scanf("%d", &n);
        int c=0;

        while(n)
        {
            c += n%2;
            n /= 2;
        }

        if(c%2)
            printf("Case %d: odd\n", T);
        else
            printf("Case %d: even\n", T);
    }


    return 0;
}

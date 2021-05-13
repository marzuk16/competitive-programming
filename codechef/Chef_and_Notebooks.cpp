#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        int x,y,k,n;
        scanf("%d %d %d %d", &x, &y, &k, &n);

        int flag = 0;
        while(n--)
        {
            int p,c;

            scanf("%d %d", &p, &c);
            int need = x-y;

            if(need <= p && k >= c)
                flag = 1;
        }
        if(flag)
            printf("LuckyChef\n");
        else
            printf("UnluckyChef\n");
    }

    return 0;
}
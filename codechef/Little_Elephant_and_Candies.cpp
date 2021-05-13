#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,c,x;

    scanf("%d", &test);

    while(test--)
    {
        int sum = 0;

        scanf("%d %d", &n,&c);
        while(n--)
        {
            scanf("%d", &x);

            sum+=x;
        }

        if(sum <= c)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
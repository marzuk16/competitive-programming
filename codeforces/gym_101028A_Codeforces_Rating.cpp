#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n,r;

    scanf("%d", &test);

    while(test--)
    {
        int sum = 0,x;
        scanf("%d %d", &n, &r);
        for(int i=1; i<=n; i++)
        {
            scanf("%d", &x);
            sum += x;
        }
        sum += 1500;

        if(sum == r)
            printf("Correct\n");
        else
            printf("Bug\n");
    }


    return 0;
}
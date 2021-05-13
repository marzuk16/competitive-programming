#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int n,x;

    while(cin>> n && n)
    {
        int sum = 0, high = 0;
        
        while(n--)
        {
            scanf("%d", &x);

            sum += x;

            if(sum < 0)
                sum = 0;

            high = max(high, sum);
        }

        if(high)
            printf("The maximum winning streak is %d.\n", high);
        else
            printf("Losing streak.\n");
    }

    return 0;
}
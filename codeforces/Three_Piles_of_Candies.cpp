#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while(test--)
    {
        lld x,sum = 0;
        for(int i=0; i<3; i++)
        {
            scanf("%lld", &x);
            sum += x;
        }

        printf("%lld\n", sum/2);
    }

    return 0;
}

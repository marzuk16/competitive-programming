#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long int res = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int val = 1;

        for (int k = 0; k <= i; k++)
        {
            if(i == n-1)
                res += val;
            val = val * (i - k) / (k + 1);
        }
    }

    printf("%lld\n", res);

    return 0;
}

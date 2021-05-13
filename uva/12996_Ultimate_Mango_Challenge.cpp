#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, l;
    scanf("%d", &test);

    for (int T = 1; T <= test; T++)
    {
        int p[11], d[11], sum = 0, flag = 0;
        scanf("%d %d", &n, &l);

        for (int i = 0; i < n; i++)
            scanf("%d", &d[i]);

        for (int i = 0; i < n; i++)
            scanf("%d", &p[i]);

        for (int i = 0; i < n; i++)
        {
            if (d[i] > p[i])
            {
                flag = 1;
                break;
            }
            else
                sum += d[i];

            if (sum > l)
            {
                flag = 1;
                break;
            }
        }
        printf("Case %d: ", T);
        if (!flag)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int test;
    scanf("%d", &test);

    while(test--)
    {
        int n,k,x,odd = 0;
        vector<int>vec;
        vec.push_back(0);
        scanf("%d %d", &n, &k);

        for(int i=1; i<=n; i++)
        {
            scanf("%d", &x);

            if(x%2)
            {
                odd++;
                vec.push_back(i);
            }
        }

        if(k <= odd && (k%2) == (odd%2) )
        {
            printf("YES\n");

            if(k==1)
                printf("%d\n", n);
            else
            {
                for (int i=1; i<k; i++)
                {
                    printf("%d ", vec[i]);
                }
                printf("%d\n", n);
            }
        }
        else
            printf("NO\n");

    }

    return 0;
}

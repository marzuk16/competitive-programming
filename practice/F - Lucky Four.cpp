#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, n;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &n);
        int cnt =0;

        while(n)
        {
            if(n%10 == 4)
                cnt++;
            n /= 10;
        }

        printf("%d\n", cnt);
    }

    return 0;
}

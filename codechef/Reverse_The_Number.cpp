#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,n, flag=0;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &n);

        while(n)
        {
            flag = 10 * flag + n%10;

            n /= 10;
        }
        printf("%d\n", flag);
        flag = 0;
    }

    return 0;
}
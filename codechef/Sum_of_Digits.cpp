#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test, n;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &n);

        int sum = 0;

        while(n)
        {
            sum += n%10;
            n /= 10;
        }
        printf("%d\n", sum);
    }

    return 0;
}
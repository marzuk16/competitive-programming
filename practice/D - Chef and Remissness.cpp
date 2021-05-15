#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a,b;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d", &a, &b);

        printf("%d %d\n", max(a,b), a+b);
    }

    return 0;
}

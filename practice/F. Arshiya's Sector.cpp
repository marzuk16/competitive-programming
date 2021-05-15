#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,r,a;
    scanf("%d", &test);

    while(test--)
    {
        scanf("%d %d", &r, &a);

        double res = ((acos(-1)*r*r)*a)/360;

        printf("%lf\n", res);
    }

    return 0;
}

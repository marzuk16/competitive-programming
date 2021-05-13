#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        double b,ls;

        scanf("%lf %lf", &b, &ls);

        if(b  > ls)
            swap(b,ls);

        printf("%.4lf %.4lf\n", (sqrt(ls*ls - b*b)), (sqrt(ls*ls + b*b)) );
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,length;

    scanf("%d", &test);

    while(test--)
    {
        scanf("%d", &length);
        double pi = 3.1416; //acos(-1);
        double res = (pi*length*length);

        printf("%.3lf\n", res);
    }

    return 0;
}

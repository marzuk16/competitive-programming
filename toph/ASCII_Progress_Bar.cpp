#include<bits/stdc++.h>
using namespace std;

int main()
{
    double per;
    scanf("%lf", &per);

    int p = per;
    int x = p/10;

    printf("[");
    for(int i=1; i<=x; i++)
        printf("+");
    for(int i=1; i<= (10-x); i++)
        printf(".");

    printf("] %d%c\n", p, '%');

    return 0;
}


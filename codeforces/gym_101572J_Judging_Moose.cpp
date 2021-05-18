#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r;
    scanf("%d %d", &l, &r);

    if( !l && !r)
        printf("Not a moose\n");
    else if( l == r )
        printf("Even %d\n", 2*r);
    else
        printf("Odd %d\n", 2*max(l,r));

    return 0;
}
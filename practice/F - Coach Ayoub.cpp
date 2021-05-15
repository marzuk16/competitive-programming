#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a,b,s;
    scanf("%d %d %d %d", &n, &a, &b, &s);

    if(s < (n*a) || s > (n*b) )
    {
        printf("No\n");
    }
    else if ((s-(a+b)) < (n-2)*a || (s-(a+b)) > (n-2)*b )
    {
        printf("No\n");
    }
    else
        printf("Yes\n");

    return 0;
}

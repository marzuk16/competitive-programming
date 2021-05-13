#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int GCD(int a, int b)
{
    if( !b )
        return a;
    return GCD(b, a%b);
}

int LCM(int a, int b)
{
    //cout<<GCD(a,b)<<endl;
    return ( (a*b) / GCD(a,b) );
}

int main()
{
    //freopen("input.txt", "r", stdin);

    int a,b;
    scanf("%d %d", &a, &b);

    printf("%d\n", LCM(a,b));

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define lld long long int

int main()
{
    int n,m;
    scanf("%d %d", &n, &m);

    for(int i=min(n,m)+1; i<=max(n,m)+1; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,x;
    scanf("%d %d", &n, &m);
    if ( !n && !m)
    {
        printf("%d\n", 0);
        return 0;
    }

    set<int> s;
    set<int> :: iterator it;
    for(int i=1; i<= n; i++)
    {
        scanf("%d", &x);
        s.insert(x);
    }
    for(int i=1; i<= m; i++)
    {
        scanf("%d", &x);
        s.insert(x);
    }

    for(it=s.begin(); it != s.end(); it++)
        if( it == s.begin())
            printf("%d", *it);
        else
            printf(" %d", *it);
        printf("\n");

    return 0;
}

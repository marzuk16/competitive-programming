#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    scanf("%d", &test);

    while(test--)
    {
        int n,s,t;
        scanf("%d %d %d", &n, &s, &t);

        if(n==s && n==t)
            printf("%d\n", 1);
        else if(n == (s+t) )
            printf("%d\n", (max(s,t)+1) );
        else
        {
            int x = (s+t) - n;
            x = max(s,t) - x;
            printf("%d\n", ++x );
        }
    }

    return 0;
}

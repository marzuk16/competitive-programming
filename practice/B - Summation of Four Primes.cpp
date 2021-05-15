#include<bits/stdc++.h>
using namespace std;

int prime[10000000];

void sieve()
{
    memset(prime, -1, sizeof(prime));
    for(int i=2; i<=10000000; i++)
        if(prime[i] == -1)
            for(int j=2; i*j<=10000000; j++)
                prime[i*j] = 0;
}

int main()
{
    sieve();
    int n,a,b,flag = 1;
    while(cin>>n)
    {
        if(n<8)
            printf("Impossible.\n");
        else
        {
            if (!(n%2))
            {
                a = 2;
                b = 2;
            }
            else
            {
                a = 2;
                b = 3;
            }
            int x = n - (a+b);

            for(int i=2; ; i++)
            {
                if(prime[i] == -1 && prime[x-i] == -1)
                {
                    printf("%d %d %d %d\n", a, b, i, x-i);
                    flag = 0;
                    break;
                }
            }
            if(flag)
                printf("Impossible.\n");
        }
    }

    return 0;
}

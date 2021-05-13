#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

bool isprime(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if( !(n%i))
            return false;
    }

    return true;
}
int main()
{
    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        int n;
        scanf("%d", &n);

        bool res = isprime(n);
        if(res)
            printf("yes\n");
        else
            printf("no\n");
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int main()
{
    int test,d,n,res;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        scanf("%d %d", &d, &n);
        for(int i=1; i<=d; i++)
        {
            res = (n*(n+1))/2;
            n = res;
        }
        cout<<res<<endl;

    }

    return 0;
}
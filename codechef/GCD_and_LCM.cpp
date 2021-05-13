#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int main()
{
    int test,a,b;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        scanf("%d %d", &a, &b);
        int gcd = __gcd(a,b);
        lld lcm = (lld)a*(lld)b;

        cout<<gcd<<" "<<lcm/gcd<<endl;

    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int main()
{
    int test,k,x,cnt=0;
    scanf("%d %d", &test, &k);
    for(int T=1; T<=test; T++)
    {
        scanf("%d", &x);

        if( !(x%k))
            cnt++;
    }

    cout<<cnt<<endl;

    return 0;
}
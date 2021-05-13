#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

llu fact[25];
vector<int>x;

void facttorial()
{
    fact[0] = 1;
    for(int i=1; i<=20; i++)
        fact[i] = fact[i-1]*i;

//    for(int i=1; i<=20; i++)
//        printf("%lld ", fact[i]);
//
//        printf("%lld\n", fact[n]);

}

int sol(lld n)
{
    x.clear();
    //cerr<<"vector: "<<x.size()<<endl;
    for(int i=20; i>=0; i--)
    {
        if(fact[i] <= n)
        {
            n -= fact[i];
            x.push_back(i);
        }
    }
    //cerr<<"Aftervector: "<<x.size()<<endl;
    return n;
}

int main()
{
    //freopen("input.txt", "w", stdin);

    facttorial();

    int test;
    lld n;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        scanf("%lld", &n);
        int f = sol(n);

        if(f)
            printf("Case %d: impossible\n", T);
        else
        {
            printf("Case %d: ", T);
            for(int i=x.size()-1; i>0; i--)
                printf("%d!+", x[i]);
            printf("%d!\n", x[0]);
        }

//        for(int i=0; i<x.size(); i++)
//            cout<<x[i]<<" ";

    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};

void sol(int T, int n)
{
    int tmp;

    map<int,int>mp;
    map<int,int> :: iterator it;

    for(int i=0; i<=25; i++)
    {
        int x = 1;
        if(prime[i] > n)
            break;

        tmp = prime[i];
        while( 1 )
        {
            x *= tmp;
            mp[tmp] += (n/x);
            if(x > n)
                break;
        }
    }

    vector<pair<int,int> >res;
    pair<int, int>p;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        p.first = it->first;
        p.second = it->second;

        res.push_back(p);
    }

    printf("Case %d: %d =", T, n);
    printf(" %d (%d)", res[0].first, res[0].second);
    if(res.size() > 1)
    {
        for(int i=1; i<res.size(); i++)
            printf(" * %d (%d)", res[i].first, res[i].second);
    }
    printf("\n");

}

int main()
{
    //freopen("input.txt", "w", stdin);
    //fopen("input.txt", "r", stdout);

    int test,n;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        scanf("%d", &n);

        sol(T, n);
    }
    return 0;
}
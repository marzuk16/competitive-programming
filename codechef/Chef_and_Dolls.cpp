#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int main()
{
    int test;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        int n,x;
        map<int,int>mp;
        map<int,int>::iterator it;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &x);
            mp[x]++;
        }

        for(it=mp.begin(); it != mp.end(); it++)
        {
            int tmp = it->second;
            if(tmp%2 == 1)
            {
                printf("%d\n", it->first);
                break;
            }
        }
    }

    return 0;
}
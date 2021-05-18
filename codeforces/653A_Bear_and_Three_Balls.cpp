#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int main()
{
    //freopen("input.txt", "w", stdin);

    int n,x;
    scanf("%d", &n);
    set<int>s;
    set<int>::iterator it;
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        s.insert(x);
    }

    int cnt = 1, tmp = 0;

    for(it = s.begin(); it != s.end(); it++)
    {
        tmp++;
        int fst;
        if(tmp == 1)
            fst = *it;
        else
        {
            int snd = *it;
            if(abs(fst-snd) == 1)
            {
                //cerr<<*it<<" ";
                cnt++;
            }
            else
                cnt = 1;

            fst = snd;
            if(cnt == 3)
            {
                printf("YES\n");
                return 0;
            }
        }
    }

    printf("NO\n");
    return 0;
}
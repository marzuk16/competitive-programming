#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int res[105];

struct info{
    int pos, contribute;
};

bool operator<(info a, info b)
{
    if(a.contribute != b.contribute)
        return b.contribute < a.contribute;
    else
        return a.pos < b.pos;
}

void sol(int p, int n)
{
    vector<info>v;
    info tmp;
    int x;

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &x);
        tmp.pos = i;
        tmp.contribute = x;

        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

//    for(int i=0; i<v.size(); i++)
//        cerr<<"pos: "<<v[i].pos<<" "<<"con: "<<v[i].contribute<<endl;

    int left = v.size()-1;

    int restP = n;
    for(int i=1; i<=n; i++)
    {
        int currentAmount = p/restP;
        tmp = v[left];
        left--;

        int pay = min(tmp.contribute, currentAmount);
        res[tmp.pos] = pay;
        p -= pay;
        restP--;
    }

    if(p)
        printf("IMPOSSIBLE\n");
    else
    {
        for(int i=1; i<n; i++)
            printf("%d ", res[i]);

        printf("%d\n", res[n]);
    }
}

int main()
{
    //freopen("input.txt", "w", stdin);
    int test;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        int p,n,x;
        scanf("%d %d", &p, &n);

        sol(p,n);
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsinged long long

int id = 0;
int tree[1000005][10];
pair<int, int> usage[1000005];

void trie(string s)
{
    int next=0,tmp=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == 'A')
            tmp = 1;
        else if ( s[i] == 'C')
            tmp = 2;
        else if (s[i] == 'G')
            tmp = 3;
        else
            tmp = 4;

       // cout<<"next: "<<next<<" tmp: "<<tmp<<" id: "<<id<<endl;
        if( !tree[next][tmp])
        {
            //cout<<"in"<<endl;
            tree[next][tmp] = id+1;
            id++;
            next = tree[next][tmp];
            usage[id].first++;
            usage[id].second = i+1;
        }
        else
        {
            next = tree[next][tmp];
            usage[next].first++;
            usage[next].second = i+1;
        }
    }

//    for(int i=0; i<10; i++)
//    {
//        for(int j=1; j<=4; j++)
//        {
//            cout<<tree[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    for(int i=1; i<=10; i++)
//        cout<<use[i]<<" ";
}

lld maximum(lld a, lld b)
{
    if(a < b)
        return b;
    else
        return a;
}

lld result()
{
    lld res = -1;

    for(int i=1; i<1000005; i++)
    {
        lld a;
        a = usage[i].first * usage[i].second;
        res = maximum(res, a);
    }

    return res;

}

int main()
{
    int test,n;
    string s;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        id = 0;
        memset(tree, 0 , sizeof(tree));
        memset(usage, 0 , sizeof(usage));

        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            trie(s);
        }

        lld res = result();
        printf("Case %d: %lld\n", T, res);
    }

    return 0;
}
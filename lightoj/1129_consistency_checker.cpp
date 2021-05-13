#include<bits/stdc++.h>
using namespace std;

#define lld long long int
#define llu unsigned long long

int id,flag;
int mark[100005];
int tree[100005][10];
vector<string >v;

void buildTrie(string s)
{
    int next = 0, tmp;
    for(int i=0; i<s.size(); i++)
    {
        tmp = s[i]-'0';
        if( !tree[next][tmp])
        {
            tree[next][tmp] = id+1;
            next = tree[next][tmp];
            id++;
        }
        else
        {
            next = tree[next][tmp];
        }
    }

    mark[next] += 1;

    if(mark[next] > 1)
        flag = 1;

//    for(int i=0; i<id; i++)
//    {
//        for(int j=0; j<10; j++)
//        {
//            cout<<tree[i][j]<<" ";
//        }
//        cout<<endl;
//    }

}

bool query()
{
    if(flag)
        return false;
    int tmp;
    string s;
    for(int i=0; i<v.size(); i++)
    {
        s = v[i];
        int next = 0, flag = 1;
        for(int j=0; j<s.size(); j++)
        {
            tmp = s[j] - '0';
            if(tree[next][tmp])
            {
                next = tree[next][tmp];
            }
            if(mark[next] && j!=(s.size()-1))
                return false;
        }

    }
    //cerr<<":("<<endl;
    return true;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int test,n;
    string s;
    scanf("%d", &test);
    for(int T=1; T<=test; T++)
    {
        id = 0;
        flag = 0;
        v.clear();
        memset(mark, 0, sizeof(mark));
        memset(tree, 0, sizeof(tree));

        scanf("%d", &n);
        for(int i=1; i<=n; i++)
        {
            cin>>s;
            v.push_back(s);
            buildTrie(s);
        }

//        for(int i=0; i<id; i++)
//        {
//            for(int j=0; j<10; j++)
//            {
//                cout<<tree[i][j]<<" ";
//            }
//            cout<<endl;
//        }

        bool res = query();

        if(res)
            printf("Case %d: YES\n", T);
        else
            printf("Case %d: NO\n", T);
    }
    return 0;
}
/*
3

10

1 2 3 4 5 4 3 2 1 10

14

1 2 3 2 1 2 3 4 3 2 1 5 4 1

5

1 2 3 4 5
*/

#include<bits/stdc++.h>
using namespace std;

int n;
int r[100][100];
//int vis[100];
vector<int >vec;


int sol(int cur_pos, int last_pos)
{
    int x=0,y;
    if(cur_pos >= vec.size())
        return 0;
    if( r[last_pos][cur_pos] == -1)
    {
        if(cur_pos == 0 || vec[cur_pos]>vec[last_pos])
            x = sol(cur_pos+1, cur_pos)+1;
        y = sol(cur_pos+1, last_pos);

        r[last_pos][cur_pos] = max(x,y);
        //vis[cur_pos] = 1;
    }
    else
    {
        //x=sol(cur_pos+1, cur_pos)+1;
        y=r[last_pos][cur_pos];
    }


    return max(x,y);
}

int main()
{
    int test,x;

    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        scanf("%d", &n);

        memset(r,-1,sizeof(r));
//        memset(vis,0,sizeof(vis));
        vec.clear();
        vec.push_back(0);

        for(int i=1; i<=n; i++)
        {
            scanf("%d", &x);
            vec.push_back(x);
        }
        clock_t t;
        t=clock();
        int res=sol(1, 0);
        t=clock()-t;
        double time = ((double)t)/CLOCKS_PER_SEC;
        printf("TIME: %d\n",time);

        printf("Case %d: %d\n", T, res);

    }


    return 0;
}

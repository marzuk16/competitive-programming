#include<bits/stdc++.h>
using namespace std;

vector<int>vec[30005];
vector<int >cost[30005];

pair<int,int> bfs(int n, int source)
{
    //cerr<<"calling bfs..."<<endl;
    queue<int>q;
    q.push(source);
    int vis[30005];
    int level[30005];
    pair<int, int>p;
    p.first=0;
    p.second=source;
    memset(vis, 0, sizeof(vis));
    vis[source]=1;
    level[source]=0;

    while(!q.empty())
    {
        //cerr<<"calling while...."<<endl;
        int tmp=q.front();
            q.pop();
        //cerr<<"tmp: "<<tmp<<endl;

        for(int i=0; i<vec[tmp].size(); i++)
        {
            //<<"calling for..."<<vec[i].size()<<endl;
            if(!vis[vec[tmp][i]])
            {
                //cerr<<"calling if..."<<endl;
                q.push(vec[tmp][i]);
                //cerr<<"F: "<<q.front()<<endl;
                vis[vec[tmp][i]]=1;

                level[vec[tmp][i]]=level[tmp]+cost[tmp][i];

                if(p.first<level[vec[tmp][i]])
                {
                    //cerr<<"lvel "<<endl;
                    //cerr<<"p.f "<<p.first<<endl;
                    p.first=level[vec[tmp][i]];
                    p.second=vec[tmp][i];
                    //cerr<<"p.af "<<p.first<<endl;
                }
            }
            //cerr<<"for end..."<<endl;
        }
        //cerr<<"q.size: "<<endl;
    }

    return p;

}

int sol(int n)
{
    int source=0;
    pair<int, int> p;
    //cerr<<"bfs..."<<endl;
    p=bfs(n, source);
    source=p.second;
    //cerr<<"snd_src: "<<source<<endl;
    //cerr<<"bfs...1"<<endl;
    p=bfs(n,source);

    return p.first;

}

int main()
{
    int test,n,u,v,w;

    scanf("%d",&test);

    for(int i=1; i<=test; i++)
    {
        scanf("%d",&n);
        memset(cost,0,sizeof(cost));
        memset(vec,0,sizeof(vec));

        for(int j=1; j<n ; j++)
        {
            scanf("%d %d %d",&u,&v,&w);

            vec[u].push_back(v);
            cost[u].push_back(w);
            vec[v].push_back(u);
            cost[v].push_back(w);

//            cost[u][v]=w;
//            cost[v][u]=w;
        }
        //cerr<<"input end..."<<endl;
        int r=sol(n);

        printf("Case %d: %d\n",i,r);
    }

    return 0;
}

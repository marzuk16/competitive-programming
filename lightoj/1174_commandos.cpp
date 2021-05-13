#include<bits/stdc++.h>
using namespace std;

vector<int>graph[105];
vector<bool>visited(105);
vector<int>col(105);
vector<vector<int> >level(2,col);

void buildGraph(int node, int edge)
{
    for(int i=0; i<105; i++)
        graph[i].clear();

    int u,v;
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d", &u, &v);

        graph[u].push_back(v);
        graph[v].push_back(u);

    }
}

void bfs(int node, int index)
{
    for(int i=0; i<visited.size(); i++)
        visited[i] = false;

	queue<int> q;
	visited[node] = true;
	q.push(node);
	level[index][node] = 0;

	while(!q.empty())
	{
		node = q.front();
		q.pop();
		for(int i=0; i<graph[node].size(); i++)
		{
			if(!visited[graph[node][i]])
			{
				visited[graph[node][i]] = true;
				level[index][graph[node][i]] += level[index][node] +1;
				q.push(graph[node][i]);
			}
		}
	}
}

int main()
{
    //freopen("input.cpp", "r", stdin);

    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {

        int node,edge;
        scanf("%d %d", &node, &edge);

        buildGraph(node, edge);

        int a,b;
        scanf("%d %d", &a, &b);

        for(int i=0; i<level[0].size(); i++)
            level[0][i] = 0;

        bfs(a,0);

        for(int i=0; i<level[1].size(); i++)
            level[1][i] = 0;

        bfs(b,1);

        int res = 0;

        for(int i=0; i<node; i++)
            res = max(res, level[0][i] + level[1][i]);

		printf("Case %d: %d\n", T, res);
    }

    return 0;
}
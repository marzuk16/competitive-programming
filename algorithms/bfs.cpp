#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];
vector<bool>visited(100);
vector<int>level(100);

void buildGraph(int node, int edge)
{
    int u,v;
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d", &u, &v);

        graph[u].push_back(v);
        graph[v].push_back(u);

    }
}

void bfs(int node)
{
	queue<int> q;
	visited[node] = true;
	q.push(node);
	level[node] = 0;

	while(!q.empty())
	{
		node = q.front();
		q.pop();
		for(int i=0; i<graph[node].size(); i++)
		{
			if(!visited[graph[node][i]])
			{
				visited[graph[node][i]] = true;
				level[graph[node][i]] += level[node] +1;
				q.push(graph[node][i]);
			}
		}
	}
}

int main()
{
    //freopen("input.txt", "r", stdin);

    int node,edge;
    scanf("%d %d", &node, &edge);
    buildGraph(node, edge);

    bfs(0);

    for(int i=0; i<node; i++)
        printf("%d\n", level[i]);



    return 0;
}

#include<bits/stdc++.h>
using namespace std;

vector<int>graph[105];
vector<int>dist(105,1e9);
vector<int>col(105);
vector<vector<int> >weight(105,col);

void buildGraph(int node, int edge)
{
    int u,v,w;
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d %d", &u, &v, &w);

        graph[u].push_back(v);
        graph[v].push_back(u);

        weight[u][v] = w;
        weight[v][u] = w;

    }

//    for(int i=0; i<node; i++)
//    {
//        for(int j=0; j<graph[i].size(); j++)
//        {
//            cout<<graph[i][j]<<" ";
//        }
//        cout<<endl;
//    }
}

void dijkstra(int source, int node)
{
    priority_queue<int> pq;
    pq.push(source);
    dist[source] = 0;

    while( !pq.empty())
    {
        int tmp = pq.top();
        pq.pop();

        for(int i=0; i<graph[tmp].size(); i++)
        {
            if(dist[graph[tmp][i]] > dist[tmp] + weight[tmp][graph[tmp][i]])
            {
                dist[graph[tmp][i]] = dist[tmp] + weight[tmp][graph[tmp][i]];
                pq.push(graph[tmp][i]);
            }
        }
    }
}

int main()
{
    freopen("input.cpp","r",stdin);

    int source,numNodes,numEdges,u,v,w;

    scanf("%d %d %d", &source, &numNodes, &numEdges);

    buildGraph(numNodes, numEdges);

    dijkstra(source, numNodes);

    for(int i=0; i<numNodes; i++)
        printf("%d ", dist[i]);

    printf("\n");

    return 0;
}

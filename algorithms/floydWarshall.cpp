#include<bits/stdc++.h>
using namespace std;

vector<int>graph[100];
vector<int>col(100,1e9);
vector<vector<int> >dis(100,col);

void buildGraph(int node, int edge)
{
    int u,v,w;
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d %d", &u, &v, &w);

        graph[u].push_back(v);
        graph[v].push_back(u);

        dis[u][v] = min(dis[u][v], w);
    }
}

void floydWarshall(int node, int edge)
{
    for(int i=0; i<node; i++)
        for(int j=0; j<node; j++){
            if(i==j)
            {
                dis[i][j]=0;
            }
        }

    for(int im=0; im<node; im++)
    {
        for(int s=0; s<node; s++)
        {
            for(int d=0; d<node; d++)
            {
                dis[s][d] = min(dis[s][d], dis[im][s] + dis[im][d]);
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
    floydWarshall(node, edge);

    int source,des;
    scanf("%d %d", &source, &des);

    printf("%d\n", dis[source][des]);

    return 0;
}

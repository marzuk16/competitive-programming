#include<bits/stdc++.h>
using namespace std;

vector<int>graph[105];
vector<int>dist(105,1e9);
vector<int>col(105);
vector<vector<int> >weight(105,col);

struct Node{
    int id;
    int cost;
};

bool operator <(Node a, Node b)
{
    if(a.cost > b.cost)
        return true;
    return false;
}

void buildGraph(int node, int edge)
{
    for(int i=0; i<105; i++)
    {
        graph[i].clear();
        for(int j=0; j<105; j++)
        {
            weight[i][j] = 1e9;
        }

    }

    int u,v,w;
    for(int i=1; i<=edge; i++)
    {
        scanf("%d %d %d", &u, &v, &w);

        graph[u].push_back(v);
        graph[v].push_back(u);

        weight[u][v] = min(weight[u][v], w);
        weight[v][u] = min(weight[v][u], w);

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

int dijkstra(int source, int node)
{
    for(int i=0; i<105; i++)
        dist[i] = 1e9;

    priority_queue<Node> pq;

    Node tmp,parent;
    tmp.id = source;
    tmp.cost = 0;
    pq.push(tmp);
    dist[source] = 0;

    while( !pq.empty())
    {
        parent = pq.top();
        pq.pop();
        //cout<<"pID: "<<parent.id<<endl;

        for(int i=0; i<graph[parent.id].size(); i++)
        {
            int child = graph[parent.id][i];
            if(dist[child] > (dist[parent.id] + weight[parent.id][child]))
            {
                dist[child] = (dist[parent.id] + weight[parent.id][child]);
                tmp.id = child;
                tmp.cost = dist[child];
                pq.push(tmp);
            }
        }
    }

    return dist[node];
}

int main()
{
    //freopen("input.txt","r",stdin);

    int test;
    scanf("%d", &test);

    for(int T=1; T<=test; T++)
    {
        int node,edge;
        scanf("%d %d", &node, &edge);

        buildGraph(node, edge);

        int res = dijkstra(1, node);

        if(res == 1e9)
            printf("Case %d: Impossible\n", T);
        else
            printf("Case %d: %d\n", T, res);
    }

    return 0;
}

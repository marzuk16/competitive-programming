#include<bits/stdc++.h>
using namespace std;

int underworld(int n)
{
    int x,y,p,vampire=0,lykans=0,m=0;
    vector<int >v[20005];
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &x, &y);
        v[x].push_back(y);
        v[y].push_back(x);
    }

    queue<int>q;
    int visited[20005],race[20005];
    memset(visited, 0, sizeof(int)*20005);
    memset(race, 0, sizeof(int)*20005);

    for(int j=1; j<20005; j++)
    {

//        queue<int>q;
//        int visited[20005],race[20005];
//        memset(visited, 0, sizeof(int)*20005);
//        memset(race, 0, sizeof(int)*20005);

        if(!visited[j] && v[j].size() > 0 )
        {
            vampire = 0 ;
            lykans = 0 ;
            q.push(j);
            visited[j]=1;
            race[j]=1;
            vampire++;

            while(!q.empty())
            {
                p=q.front();
                //printf("%d ",p);
                q.pop();
                for(int i=0; i<v[p].size(); i++)
                {
                    if(!visited[v[p][i]])
                    {
                        q.push(v[p][i]);
                        visited[v[p][i]]=1;
                        if(race[p]==1)
                        {
                            race[v[p][i]]=2;
                            lykans++;
                        }
                        if(race[p]==2)
                        {
                            race[v[p][i]]=1;
                            vampire++;
                        }
                    }
                }
            }

            m+=max(vampire,lykans);
        }
    }

    return m;
}

int main()
{
    int test,n,p;
    scanf("%d",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%d",&n);

        p=underworld(n);

        printf("Case %d: %d\n", i, p);
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
char arr[25][25];
int vis[25][25];

int prince(int col, int row)
{
    int n=col,m=row,cnt=0;
    //memset(arr,0,sizeof(arr));
    memset(vis,0,sizeof(vis));
    memset(arr,0,sizeof(arr));

    queue<int>q;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            scanf("%c",&arr[i][j]);
            if(arr[i][j]=='@')
            {
                q.push(i); q.push(j);
                vis[i][j]=1;
            }
        }
        getchar() ;
    }

    while(!q.empty())
    {
        //cout<<"inside of while loop ..."<<endl;
        int r=q.front(); q.pop();
        int c=q.front(); q.pop();
        cnt++;

        if(arr[r][c+1]=='.' && !vis[r][c+1])
        {
            q.push(r);q.push(c+1);
            vis[r][c+1]=1;
        }
        if(arr[r+1][c]=='.' && !vis[r+1][c])
        {
            q.push(r+1);q.push(c);
            vis[r+1][c]=1;
        }
        if(arr[r][c-1]=='.' && !vis[r][c-1])
        {
            q.push(r);q.push(c-1);
            vis[r][c-1]=1;
        }
        if(arr[r-1][c]=='.' && !vis[r-1][c])
        {
            q.push(r-1);q.push(c);
            vis[r-1][c]=1;
        }
    }

    return cnt;
}

int main()
{
    int test,col,row,m;
    scanf("%d",&test);
    getchar();
    for(int i=1; i<=test; i++)
    {
        scanf("%d %d",&col, &row);
        getchar() ;
        m=prince(col, row);
        printf("Case %d: %d\n",i,m);
    }

    return 0;
}

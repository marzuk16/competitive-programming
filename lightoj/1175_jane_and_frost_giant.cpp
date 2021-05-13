#include<bits/stdc++.h>
using namespace std;
char arr[220][220];
int jane_vis[220][220];
int fire_vis[220][220];
int level[220][220];
 
int giant(int row ,int col)
{
    int result=0,frow,fcol,r,c,f=0,ff=0,jane=0,jane1=0;
 
    memset(jane_vis,0,sizeof(jane_vis));
    memset(arr,0,sizeof(arr));
    memset(fire_vis,0,sizeof(fire_vis));
    memset(level,0,sizeof(level));
 
    queue<int>q;
    queue<int>fq;
 
    for(int i=1; i<=row; i++)
    {
        for(int j=1; j<=col; j++)
        {
            scanf("%c",&arr[i][j]);
            if(arr[i][j]=='J')
            {
                if(i==1 || j==1 || i==row || j==col)
                    return 1;
 
                q.push(i); q.push(j);
                jane_vis[i][j]=1;
                jane++;
            }
            if(arr[i][j]=='F')
            {
                fq.push(i); fq.push(j);
                //frow=i;fcol=j;
                fire_vis[i][j]=1;
                f++;
            }
        }
        getchar() ;
    }
 
    while(!q.empty())
    {
        //cout<<"inside of while loop ..."<<endl;
//        r=q.front(); q.pop();
//        c=q.front(); q.pop();
        //cout<<"r:"<<r<<"c:"<<c<<endl;
        if(!fq.empty())
        {
 
            for(int fqq=1; fqq<=f; fqq++)
            {
                frow=fq.front(); fq.pop();
                //cout<<"frow executed..."<<frow<<endl;
                fcol=fq.front(); fq.pop();
                //cout<<"fcol executed..."<<fcol<<endl;
 
                if(arr[frow][fcol+1]!='#' && !fire_vis[frow][fcol+1] && fcol+1<=col)
                {
                    arr[frow][fcol+1]='F';
                    fire_vis[frow][fcol+1]=1;
                    fq.push(frow); fq.push(fcol+1);
                    //cout<<arr[frow][fcol+1]<<endl;
                    //cout<<"1st if"<<endl;
                    ff++;
                }
                if(arr[frow+1][fcol]!='#' && !fire_vis[frow+1][fcol] && frow+1<=row)
                {
                    arr[frow+1][fcol]='F';
                    fire_vis[frow+1][fcol]=1;
                    fq.push(frow+1); fq.push(fcol);
                    //cout<<arr[frow+1][fcol]<<endl;
                    //cout<<"2nd if"<<endl;
                    ff++;
                }
                if(arr[frow][fcol-1]!='#' && !fire_vis[frow][fcol-1] && fcol-1>0)
                {
                    arr[frow][fcol-1]='F';
                    fire_vis[frow][fcol-1]=1;
                    fq.push(frow); fq.push(fcol-1);
                    //cout<<arr[frow][fcol-1]<<endl;
                    //cout<<"3rd if"<<endl;
                    ff++;
                }
                if(arr[frow-1][fcol]!='#' && !fire_vis[frow-1][fcol] && frow-1>0)
                {
                    arr[frow-1][fcol]='F';
                    fire_vis[frow-1][fcol]=1;
                    fq.push(frow-1); fq.push(fcol);
                    //cout<<arr[frow-1][fcol]<<endl;
                    //cout<<"4th if"<<endl;
                    ff++;
                }
            }
//            cout<<"F: "<<f<<endl;
//            cout<<"Ff: "<<ff<<endl;
            f=ff;
            ff=0;
        }
 
    for(int ja=1; ja<=jane; ja++)
    {
 
        r=q.front(); q.pop();
        c=q.front(); q.pop();
        if(arr[r][c+1]=='.' && !jane_vis[r][c+1] && c+1<=col)
        {
            //cout<<"c+1: "<<c+1<<endl;
            q.push(r);q.push(c+1);
            jane_vis[r][c+1]=1;
            level[r][c+1]=(level[r][c])+1;
            jane1++;
            if(c+1>=col)
                return level[r][c+1]+1;
        }
        if(arr[r+1][c]=='.' && !jane_vis[r+1][c] && r+1<=row)
        {
            //cout<<"r+1: "<<r+1<<endl;
            q.push(r+1);q.push(c);
            jane_vis[r+1][c]=1;
            level[r+1][c]=(level[r][c])+1;
            jane1++;
            if(r+1>=row)
                return level[r+1][c]+1;
        }
        if(arr[r][c-1]=='.' && !jane_vis[r][c-1] && c-1>0)
        {
            //cout<<"c-1: "<<c-1<<endl;
            q.push(r);q.push(c-1);
            jane_vis[r][c-1]=1;
            level[r][c-1]=(level[r][c])+1;
            jane1++;
            if(c-1<=1)
                return level[r][c-1]+1;
        }
        if(arr[r-1][c]=='.' && !jane_vis[r-1][c] && r-1>0)
        {
            //cout<<"r-1: "<<r-1<<endl;
            q.push(r-1);q.push(c);
            jane_vis[r-1][c]=1;
            level[r-1][c]=(level[r][c])+1;
            jane1++;
            if(r-1<=1)
                return level[r-1][c]+1;
        }
    }
        jane=jane1;
        jane1=0;
//        for(int ma=1; ma<=row;ma++)
//        {
//            for(int mar=1; mar<=col; mar++)
//            {
//                cout<<arr[ma][mar];
//            }
//            cout<<endl;
//        }
//            cout<<endl;
    }
    return result;
}
 
int main()
{
    int test,row,col;
    scanf("%d",&test);
    getchar();
    for(int i=1; i<=test; i++)
    {
        scanf("%d %d", &row, &col);
        getchar() ;
        int m=giant(row,col);
        if(m)
            printf("Case %d: %d\n",i,m);
        else
            printf("Case %d: IMPOSSIBLE\n",i);
    }
 
    return 0;
}
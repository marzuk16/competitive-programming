#include<bits/stdc++.h>
using namespace std;

int cost[1005];
int vis[1005];
vector<int > vec[10005];

int sol(int n)
{
    //cerr<<"colling sol....."<<endl;
    memset(vis,0,sizeof(vis));

    int result,res,sum,cnt=1;
    double avg,r;

    queue<int>q;
    set<double >res_set;
    res_set.clear();
//    q.push(1);
//    vis[1]=1;
//    sum=cost[1];

    for(int i=1; i<=n; i++)
    {
        //int i=1;
        if(!vis[i])
        {

            q.push(i);
            vis[i]=1;
            sum=cost[i];
            //cerr<<"Q: "<<q.size()<<endl;
            while(!q.empty())
            {
                int tmp=q.front();
                q.pop();

                //for(int i=1; i<=n; i++)
                //{
                    if(vec[tmp].size()==0)
                    {
                        //avg=cost[tmp];
                        //cerr<<"size: 0"<<endl;
                        res_set.insert(cost[tmp]);
                    }
                    else
                    {
                        //cerr<<"esle...."<<endl;
                        for(int j=0; j<vec[tmp].size(); j++)
                        {
                            if(!vis[vec[tmp][j]])
                            {
                                q.push(vec[tmp][j]);
                                vis[vec[tmp][j]]=1;
                                sum+=cost[vec[tmp][j]];
                                cnt++;
                            }
                        }
        //                cout<<"cnt: "<<cnt<<endl;
        //                cout<<"sum: "<<sum<<endl;
        //                avg=sum/cnt;
        //                cout<<"avg: "<<avg<<endl;
        //                sum=0;cnt=0;
        //                r=avg-int(avg);
        //                cout<<"r: "<<r<<endl;
        //                if(!r)
        //                    s.insert(avg);
                    }
                //}
            }
            //cout<<"cnt: "<<cnt<<endl;
                        //cout<<"sum: "<<sum<<endl;
                        avg=double(sum)/cnt;
                        //cout<<"avg: "<<avg<<endl;
                        //sum=0;cnt=0;
                        r=avg-int(avg);
                        //cout<<"r: "<<r<<endl;
                        if(!r)
                            res_set.insert(avg);
                        else
                            return 0;

                    sum=0;cnt=1;
                    //cerr<<"avg: "<<avg<<endl;
        }
    }
    //cerr<<"yyrfyg."<<res_set.size()<<endl;
    if(res_set.size()==1)
        return 1;
    else
        return 0;
}

int main()
{
    int test,n,m,u,v;
    scanf("%d",&test);

    for(int i=1; i<=test; i++)
    {
        memset(vec, 0, sizeof(vec));
        scanf("%d %d",&n,&m);

        for(int j=1; j<=n; j++)
        {
            scanf("%d",&cost[j]);
        }
        while(m--)
        {
            scanf("%d %d",&u,&v);

            vec[u].push_back(v);
            vec[v].push_back(u);
        }
//        cerr<<endl;
//        for(int i=1; i<=n; i++)
//        {
//            for(int j=0; j<vec[i].size(); j++)
//            {
//                cerr<<vec[i][j]<<" ";
//            }
//            cerr<<endl;
//        }

        //cerr<<"cost: "<<cost.size()<<endl;
        //cerr<<"vec: "<<vec[1].size()<<endl;

        int f=sol(n);
        //cerr<<"f: "<<f<<endl;
        if(f)
            printf("Case %d: Yes\n",i);
        else
            printf("Case %d: No\n",i);

    }

    return 0;
}

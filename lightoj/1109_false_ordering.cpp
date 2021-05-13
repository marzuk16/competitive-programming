#include<bits/stdc++.h>
#define N 1000
using namespace std;

pair<int,int>p;
vector<pair<int,int> >v;
//map<int,int>m;

void gen()
{
    int div=1;
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i/2; j++)
        {
            if(!(i%j))
                div++;
        }
        //m[div]=i;
        //m.insert(make_pair(div,i));
        p.first=i;
        p.second=div;
        v.push_back(p);
        div=1;
    }
    pair<int, int>tmp;
    for(int j=1; j<=N; j++)
    {
        for(int i=0; i<N-1; i++)
        {

            if(v[i].second==v[i+1].second && v[i].first<v[i+1].first)
            {
                tmp.first=v[i].first;
                tmp.second=v[i].second;

                v[i].first=v[i+1].first;
                v[i].second=v[i+1].second;

                v[i+1].first=tmp.first;
                v[i+1].second=tmp.second;
                //break;
            }
            else if(v[i].second>v[i+1].second)
            {
                tmp.first=v[i].first;
                tmp.second=v[i].second;

                v[i].first=v[i+1].first;
                v[i].second=v[i+1].second;

                v[i+1].first=tmp.first;
                v[i+1].second=tmp.second;
                //break;
            }

        }
    }
    //reverse(v.begin(),v.end());
//    for(int i=0; i<N; i++)
//    {
//        printf("%d-> %d\n",v[i].first,v[i].second);
//    }
}


int main()
{
    int test,n;

    gen();
    scanf("%d",&test);

    for(int i=1; i<=test; i++)
    {
        scanf("%d",&n);
        printf("Case %d: %d\n",i,v[n-1].first);
    }

    return 0;
}

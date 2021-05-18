#include<bits/stdc++.h>
using namespace std;

#define lld long long int

void print(priority_queue<pair<lld, int> > &pq, int n, int T)
{
    pair<lld, int>tmp;
    lld pr[100005];

    while ( !pq.empty())
    {
        tmp = pq.top();pq.pop();
        //cout<<"X: "<<tmp.second<<" tmp: "<<tmp.first<<endl;
        pr[tmp.second] = tmp.first;
    }

    cout<<"Case "<<T<<":"<<endl;
    for(int i=1; i<n; i++)
        cout<<pr[i]<<" ";
    cout<<pr[n]<<endl;
    

}

void sol(priority_queue<pair<lld, int> > &pq, lld x)
{
    pair<lld, int>tmp;
    //tmp.first = 2e18;

    while (1)
    {
        tmp = pq.top();
        //cout<<"X: "<<x<<" tmp: "<<tmp.first<<endl;
        if(tmp.first < x) break;
        tmp.first %= x;
        //cout<<"tmp: "<<tmp.first<<" "<<tmp.second<<endl;
        pq.pop();
        pq.push(tmp);
    }
    
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int test,n,q;
    lld x;
    pair<lld,int>tmp;

    cin>>test;

    for(int T=1; T<=test; T++)
    {
        priority_queue<pair<lld, int> >pq;

        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cin>>tmp.first;
            tmp.second = i;
            pq.push(tmp);
        }

        cin>>q;

        for(int i=1; i<=q; i++)
        {
            cin>>x;
            sol(pq, x);
        }

        print(pq, n, T);
    }

    return 0;
}
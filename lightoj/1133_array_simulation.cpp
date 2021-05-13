#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>v;

void process()
{
    int x,y,m;
    char c;

    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    for(int i=1; i<=m; i++)
    {
        cin>>c;

        switch(c)
        {
            case 'S':
                cin>>x;
                for(int j=0; j<n; j++)
                    v[j] += x;
                break;
            case 'M':
                cin>>x;
                for(int j=0; j<n; j++)
                    v[j] *= x;
                break;

            case 'D':
                cin>>x;
                for(int j=0; j<n; j++)
                    v[j] /= x;
                break;
            case 'R':
                reverse(v.begin(), v.end());
                break;
            case 'P':
                cin>>x>>y;
                swap(v[x], v[y]);
                break;
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);

    int test;
    cin>>test;

    for(int T=1; T<=test; T++)
    {
        v.clear();
        process();

        cout<<"Case "<<T<<":"<<endl;
        for(int i=0; i<(n-1); i++)
            cout<<v[i]<<" ";
        cout<<v[(n-1)]<<endl;

    }

    return 0;
}
